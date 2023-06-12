# Template Set Class

This program implements a template-based set class that allows storing a collection of items without duplicates. The set class provides functionality to add items, remove items, determine the number of items in the set, check membership of an item, and retrieve a dynamically allocated array of all items in the set.

## Problem Description

Abdullah Mohamed needs a set class for his programming job. The set class should support the following external functions:

- `add(item)`: Adds a new item to the set. If the item is already in the set, nothing happens.
- `remove(item)`: Removes an item from the set.
- `size()`: Returns the number of items in the set.
- `contains(item)`: Determines if an item is a member of the set.
- `toArray()`: Returns a dynamically allocated array containing each item in the set. The caller is responsible for deallocating the memory.

Internally, the set class can use any data structure (such as a list, vector, or array) to represent the set.

The program should be tested with different data types, including strings, integers, or other custom classes. If objects are added to the set, the `==` and `!=` operators may need to be overloaded for the object's class to properly determine membership in the template-based set class.

## Usage

To use the template set class program, follow these steps:

1. Clone the repository: `git clone https://github.com/your/repository.git`
2. Navigate to the project directory: `cd template-set-class`
3. Compile and run the program: `./template_set`
4. Follow the example usage provided in the program or modify it to suit your needs.

## Requirements

This program requires a C++ compiler that supports the C++11 standard.

## Contribution

Contributions to this project are welcome. If you find any issues or have suggestions for improvement, please create a new issue or submit a pull request.


## Contact

If you have any questions or suggestions regarding this program, please feel free to contact me at [messam.sde@gmail.com](mailto:messam.sde@gmail.com).
