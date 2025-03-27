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
