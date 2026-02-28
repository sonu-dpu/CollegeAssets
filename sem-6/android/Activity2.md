

# 📱 DataVault – UI + Database Interaction (Step by Step)

## 🎯 What the UI Will Do

Using the UI, user can:

* Enter **Note Title, Description, Category**
* **Insert** data into SQLite
* **View** all records
* **Update** a record by ID
* **Delete** a record by ID
* See output on screen (TextView)

---

## 🔹 STEP 1: UI Layout (activity_main.xml)

Create a clean form layout.

### 📄 `activity_main.xml`

```xml
<?xml version="1.0" encoding="utf-8"?>
<ScrollView xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <LinearLayout
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:orientation="vertical"
        android:padding="16dp">

        <EditText
            android:id="@+id/etId"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Note ID (for Update/Delete)"
            android:inputType="number" />

        <EditText
            android:id="@+id/etTitle"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Title" />

        <EditText
            android:id="@+id/etDesc"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Description" />

        <EditText
            android:id="@+id/etCategory"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Category" />

        <Button
            android:id="@+id/btnInsert"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Insert Note" />

        <Button
            android:id="@+id/btnView"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="View Notes" />

        <Button
            android:id="@+id/btnUpdate"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Update Note" />

        <Button
            android:id="@+id/btnDelete"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:text="Delete Note" />

        <TextView
            android:id="@+id/tvResult"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:textSize="16sp"
            android:paddingTop="10dp" />

    </LinearLayout>
</ScrollView>
```

✔ Simple
✔ Exam-friendly
✔ Easy to explain

---

## 🔹 STEP 2: Connect UI with Database (MainActivity.java)

Now we **connect buttons → SQLite methods**.

### 📄 `MainActivity.java`

```java
public class MainActivity extends AppCompatActivity {

    EditText etId, etTitle, etDesc, etCategory;
    Button btnInsert, btnView, btnUpdate, btnDelete;
    TextView tvResult;

    DatabaseHelper db;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        db = new DatabaseHelper(this);

        etId = findViewById(R.id.etId);
        etTitle = findViewById(R.id.etTitle);
        etDesc = findViewById(R.id.etDesc);
        etCategory = findViewById(R.id.etCategory);

        btnInsert = findViewById(R.id.btnInsert);
        btnView = findViewById(R.id.btnView);
        btnUpdate = findViewById(R.id.btnUpdate);
        btnDelete = findViewById(R.id.btnDelete);

        tvResult = findViewById(R.id.tvResult);

        insertData();
        viewData();
        updateData();
        deleteData();
    }
```

---

## 🔹 STEP 3: Insert Data from UI → SQLite

```java
private void insertData() {
    btnInsert.setOnClickListener(v -> {

        String title = etTitle.getText().toString();
        String desc = etDesc.getText().toString();
        String category = etCategory.getText().toString();
        String date = new SimpleDateFormat("dd/MM/yyyy").format(new Date());

        boolean inserted = db.insertNote(title, desc, category, date);

        if (inserted)
            Toast.makeText(this, "Data Inserted", Toast.LENGTH_SHORT).show();
        else
            Toast.makeText(this, "Insert Failed", Toast.LENGTH_SHORT).show();
    });
}
```

✔ UI → DB
✔ Insert operation

---

## 🔹 STEP 4: View Data Using Cursor (UI Output)

```java
private void viewData() {
    btnView.setOnClickListener(v -> {

        Cursor cursor = db.getAllNotes();

        if (cursor.getCount() == 0) {
            tvResult.setText("No Records Found");
            return;
        }

        StringBuilder buffer = new StringBuilder();
        while (cursor.moveToNext()) {
            buffer.append("ID: ").append(cursor.getString(0)).append("\n");
            buffer.append("Title: ").append(cursor.getString(1)).append("\n");
            buffer.append("Desc: ").append(cursor.getString(2)).append("\n");
            buffer.append("Category: ").append(cursor.getString(3)).append("\n");
            buffer.append("Date: ").append(cursor.getString(4)).append("\n\n");
        }

        tvResult.setText(buffer.toString());
    });
}
```

✔ Cursor usage ✔
✔ View operation ✔

---

## 🔹 STEP 5: Update Record Using UI

```java
private void updateData() {
    btnUpdate.setOnClickListener(v -> {

        String id = etId.getText().toString();
        String title = etTitle.getText().toString();
        String desc = etDesc.getText().toString();

        boolean updated = db.updateNote(id, title, desc);

        if (updated)
            Toast.makeText(this, "Data Updated", Toast.LENGTH_SHORT).show();
        else
            Toast.makeText(this, "Update Failed", Toast.LENGTH_SHORT).show();
    });
}
```

✔ Update via UI ✔

---

## 🔹 STEP 6: Delete Record Using UI

```java
private void deleteData() {
    btnDelete.setOnClickListener(v -> {

        String id = etId.getText().toString();

        boolean deleted = db.deleteNote(id);

        if (deleted)
            Toast.makeText(this, "Data Deleted", Toast.LENGTH_SHORT).show();
        else
            Toast.makeText(this, "Delete Failed", Toast.LENGTH_SHORT).show();
    });
}
```

✔ Delete via UI ✔

---

## 🔹 STEP 7: How This Meets Lab Requirements

| Requirement        | Done |
| ------------------ | ---- |
| SQLiteOpenHelper   | ✅    |
| CRUD operations    | ✅    |
| Cursor usage       | ✅    |
| UI interaction     | ✅    |
| Meaningful queries | ✅    |
| Scenario-based DB  | ✅    |

---

## 🔹 STEP 8: How to Explain in Practical / Viva

Say this confidently:

> “The application provides a user interface where users can interact with a
> SQLite database. Data is inserted, updated, deleted, and retrieved using buttons.
> SQLiteOpenHelper is used for database management, and Cursor is used to display
> stored records on the screen.”


