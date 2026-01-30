Got it 👍
This is a **classic Android practical** and very doable in one session. I’ll give you a **clear, exam-friendly step-by-step process using Java**, no extra theory fluff.

---

# 🗺️ Intent Treasure Hunt – Step-by-Step (Java)

## 🎯 Goal (What you’re building)

A simple Android app where:

* User moves between **multiple Activities** using **Explicit Intents**
* Uses **Implicit Intents** to open built-in apps (Maps / Browser / Dialer)
* Each screen gives a **clue**
* **Toast messages** guide the user
* Feels like a **treasure hunt**

---

## 📌 Step 1: Create New Android Project

1. Open **Android Studio**
2. Click **New Project**
3. Choose **Empty Views Activity**
4. Fill details:

   * **Name:** `IntentTreasureHunt`
   * **Language:** **Java**
   * **Minimum SDK:** API 21 or above
5. Click **Finish**

---

## 📌 Step 2: Plan Your Activities (Very Important)

Create **4 Activities**:

| Activity           | Purpose                       |
| ------------------ | ----------------------------- |
| `MainActivity`     | Start of hunt                 |
| `ClueActivity1`    | First clue                    |
| `ClueActivity2`    | Second clue + implicit intent |
| `TreasureActivity` | Final treasure screen         |

---

## 📌 Step 3: Create Activities

### Create new Activity:

1. Right click `java > your_package`
2. **New → Activity → Empty Views Activity**
3. Name them:

   * `ClueActivity1`
   * `ClueActivity2`
   * `TreasureActivity`
4. Language: **Java**

Android Studio automatically adds them to `AndroidManifest.xml` ✔️

---

## 📌 Step 4: Design Layouts (Simple & Clean)

### `activity_main.xml`

```xml
<LinearLayout
    android:orientation="vertical"
    android:gravity="center"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <TextView
        android:text="🗺️ Welcome to the Treasure Hunt!\nClue: Start your journey"
        android:textSize="18sp"
        android:padding="16dp"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"/>

    <Button
        android:id="@+id/btnStart"
        android:text="Start Hunt"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"/>
</LinearLayout>
```

---

## 📌 Step 5: Explicit Intent (Main → Clue 1)

### `MainActivity.java`

```java
Button btnStart = findViewById(R.id.btnStart);

btnStart.setOnClickListener(v -> {
    Toast.makeText(this, "Hunt Started!", Toast.LENGTH_SHORT).show();

    Intent intent = new Intent(MainActivity.this, ClueActivity1.class);
    startActivity(intent);
});
```

✅ **Explicit Intent used**

---

## 📌 Step 6: Clue Activity 1

### `activity_clue1.xml`

```xml
<LinearLayout
    android:orientation="vertical"
    android:gravity="center"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <TextView
        android:text="🔍 Clue 1:\nFind the place where knowledge lives."
        android:textSize="18sp"
        android:padding="16dp"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"/>

    <Button
        android:id="@+id/btnNext"
        android:text="Next Clue"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"/>
</LinearLayout>
```

### `ClueActivity1.java`

```java
Button btnNext = findViewById(R.id.btnNext);

btnNext.setOnClickListener(v -> {
    Toast.makeText(this, "Good! Moving to next clue.", Toast.LENGTH_SHORT).show();

    Intent intent = new Intent(ClueActivity1.this, ClueActivity2.class);
    startActivity(intent);
});
```

---

## 📌 Step 7: Implicit Intent (Open Maps / Browser)

### `activity_clue2.xml`

```xml
<LinearLayout
    android:orientation="vertical"
    android:gravity="center"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <TextView
        android:text="📍 Clue 2:\nSearch this place on map."
        android:textSize="18sp"
        android:padding="16dp"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"/>

    <Button
        android:id="@+id/btnMap"
        android:text="Open Map"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"/>

    <Button
        android:id="@+id/btnTreasure"
        android:text="Found Treasure"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"/>
</LinearLayout>
```

### `ClueActivity2.java`

```java
Button btnMap = findViewById(R.id.btnMap);
Button btnTreasure = findViewById(R.id.btnTreasure);

btnMap.setOnClickListener(v -> {
    Toast.makeText(this, "Opening Maps...", Toast.LENGTH_SHORT).show();

    Intent mapIntent = new Intent(Intent.ACTION_VIEW);
    mapIntent.setData(Uri.parse("geo:0,0?q=library"));
    startActivity(mapIntent);
});

btnTreasure.setOnClickListener(v -> {
    Intent intent = new Intent(ClueActivity2.this, TreasureActivity.class);
    startActivity(intent);
});
```

✅ **Implicit Intent used**

---

## 📌 Step 8: Final Treasure Activity

### `activity_treasure.xml`

```xml
<LinearLayout
    android:orientation="vertical"
    android:gravity="center"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

    <TextView
        android:text="🎉 Congratulations!\nYou Found the Treasure!"
        android:textSize="22sp"
        android:padding="16dp"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"/>
</LinearLayout>
```

### `TreasureActivity.java`

```java
Toast.makeText(this, "Treasure Hunt Completed!", Toast.LENGTH_LONG).show();
```

---

## 📌 Step 9: Test the App

1. Run on Emulator or Phone
2. Check:

   * Activity navigation ✔️
   * Toast messages ✔️
   * Implicit Intent opens Maps ✔️

---

## 📌 Step 10: How to Explain in Practical Viva

Say this 👇

> “This application demonstrates Explicit Intents for navigation between Activities and Implicit Intents to open system applications like Google Maps. Each Activity shows clues and uses Toast messages for guidance, simulating a treasure hunt.”

---

---

## ❌ What’s wrong in your code

### 1️⃣ `setContentView()` is missing

Without it, Android **does not load your layout**, so the screen is blank.

### 2️⃣ `findViewById()` is called **before** `setContentView()`

Views don’t exist yet → crash / blank screen.

### 3️⃣ You are starting the next Activity **immediately**

So even if layout loaded, user won’t see it.

---

## ✅ Correct MainActivity Code (FIXED)

```java
public class MainActivity extends AppCompatActivity {

    Button btnStart;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // 1️⃣ Load the layout FIRST
        setContentView(R.layout.activity_main);

        // 2️⃣ Then bind views
        btnStart = findViewById(R.id.btnStart);

        // 3️⃣ Button click → move to next activity
        btnStart.setOnClickListener(v -> {
            Toast.makeText(MainActivity.this, "Hunt Started!", Toast.LENGTH_SHORT).show();

            Intent intent = new Intent(MainActivity.this, ClueActivity1.class);
            startActivity(intent);
        });
    }
}
```

---

## 🧠 Why this works (Exam-friendly explanation)

* `setContentView()` loads the UI
* `findViewById()` connects Java with XML
* Explicit Intent is triggered **on button click**
* Prevents black screen and auto-navigation

---

## ⚠️ Golden Rule (Remember forever)

> **Order must ALWAYS be:**

```
super.onCreate()
setContentView()
findViewById()
logic (clicks, intents, etc.)
```

--- 

## ✅ Checklist Before Running

✔ `activity_main.xml` has `btnStart`
✔ `ClueActivity1` exists
✔ `ClueActivity1` is in `AndroidManifest.xml`

---

If you want, paste your **activity_main.xml** here and I’ll double-check it in 10 seconds 😄

