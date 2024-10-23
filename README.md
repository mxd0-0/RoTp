Here is a suggested README file for your repository:

---

# RoTp

RoTp is a simple C++ program that generates a list of random numbers and optionally displays the number of repetitions for each number.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC, Clang)
- CMake (optional, for build automation)

### Building the Project

To build the project, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/mxd0-0/RoTp.git
    cd RoTp
    ```

2. Compile the code using your preferred method. For example, using `g++`:
    ```bash
    g++ main.cpp -o RoTp
    ```

3. Run the executable:
    ```bash
    ./RoTp
    ```

### Usage

1. When prompted, enter the size of the list you want to generate.
2. The program will generate a list of random numbers and display them.
3. When prompted, choose whether or not to display the repetitions of each number.

### Example

```plaintext
-enter the size of your list : 5
the generated numbers are : 23 45 67 23 89
Do you want to show the repetitions? (y/n): y
each number is repeated :
number 23 is repeated 2 times
number 45 is repeated 1 time
number 67 is repeated 1 time
number 89 is repeated 1 time
```

### Code Overview

The main file `main.cpp` contains the following key sections:
- Include necessary headers (`<unordered_map>`, `<vector>`, `<ctime>`, `<cstdlib>`)
- Generate a list of random numbers
- Store and count repetitions using `unordered_map`
- Display the generated numbers and optionally the repetitions

---

Feel free to customize this README as per your project's needs.
