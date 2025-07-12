# CollegeAssets


## Run PHP 

### on webserver

```bash
php -S localhost:8080
```

### on terminal
```bash
php filename.php
```


```cpp
#include <iostream>
#include <cstdlib>  // For system()

using namespace std;

int main() {
    // Run the shell script using the system function
    int result = system("./script.sh");

    if (result == 0) {
        cout << "Shell script executed successfully!" << endl;
    } else {
        cout << "Error occurred while executing the shell script." << endl;
    }

    return 0;
}

```


```
practical os : 
https://chatgpt.com/share/6871f399-a6b8-8008-86f0-4965aa29cd3d

https://chatgpt.com/share/6871f3af-44ac-8008-950e-35d16a6412fe
```



4. Write a python program to splitting the dataset into training and testing set. 
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
```r
# Load the dataset
iris = load_iris()
X = iris.data
y = iris.target

# Split the dataset: 70% training, 30% testing
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)

# Print the shapes of the splits
print("Training set size:", X_train.shape)
print("Testing set size:", X_test.shape)
```
