## Python Data Structures

### Tuples
- Tuples are immutable sequences, meaning their elements cannot be changed after assignment.
- They are defined using parentheses `()`.

```python
tuple_example = (1, 2, 3, "hello")
print(tuple_example[0])  # Output: 1
```

### Strings
- Strings are sequences of characters enclosed in quotes.
- They are immutable and support various operations like slicing and concatenation.

```python
string_example = "Hello, World!"
print(string_example.upper())  # Output: "HELLO, WORLD!"
```

### Sets
- Sets are unordered collections of unique elements.
- They are defined using curly braces `{}`.

```python
set_example = {1, 2, 2, 3, 4}
print(set_example)  # Output: {1, 2, 3, 4} (Duplicates removed)
```

### Lists
- Lists are ordered, mutable sequences that allow duplicate values.
- They are defined using square brackets `[]`.

```python
list_example = [1, 2, 3, 4, 4]
list_example.append(5)
print(list_example)  # Output: [1, 2, 3, 4, 4, 5]
```

### Dictionaries
- Dictionaries store key-value pairs.
- They are defined using curly braces `{}` with key-value pairs separated by colons `:`.

```python
dict_example = {"name": "Alice", "age": 25}
print(dict_example["name"])  # Output: "Alice"
```

## Python Small Tasks

### 1. Removing Duplicates from a List
Removing duplicates from a list can be easily achieved using sets since sets do not allow duplicate values.

```python
def remove_duplicates(lst):
    return list(set(lst))

# Example usage
numbers = [1, 2, 2, 3, 4, 4, 5]
unique_numbers = remove_duplicates(numbers)
print(unique_numbers)  # Output: [1, 2, 3, 4, 5] (Order may vary)
```
### 3. Checking for Anagrams
An anagram is a word or phrase formed by rearranging the letters of another. This function checks if two strings are anagrams by sorting them after removing spaces and converting them to lowercase.

```python
def are_anagrams(str1, str2):
    return sorted(str1.replace(" ", "").lower()) == sorted(str2.replace(" ", "").lower())

# Example usage
print(are_anagrams("listen", "silent"))  # Output: True
print(are_anagrams("hello", "world"))    # Output: False
```

---
## Mini Project
### Creating Unique Usernames
This function ensures unique usernames by replacing spaces with underscores and appending a number if the username already exists. It uses a set to keep track of unique usernames.

```python
def generate_unique_usernames(names):
    usernames = set()
    unique_names = []
    
    for name in names:
        username = name.lower().replace(" ", "_")
        original_username = username
        count = 1
        
        while username in usernames:
            username = f"{original_username}{count}"
            count += 1
        
        usernames.add(username)
        unique_names.append(username)
    
    return unique_names

# Example usage
names_list = ["Alice", "Bob", "Alice", "Charlie", "Bob", "Alice"]
unique_usernames = generate_unique_usernames(names_list)
print(unique_usernames)  
```

output:
```
['alice', 'bob', 'alice1', 'charlie', 'bob1', 'alice2']
```


