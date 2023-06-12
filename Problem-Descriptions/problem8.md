# Template Stack Class with Exceptions

This program implements a template stack class with methods for push, pop, top, size, and empty operations. The stack has a fixed size defined during initialization and does not expand dynamically. The program also defines two exception classes: `StackOverflowException` and `StackEmptyException`.

## Problem Description

Kirolos Usama wants to learn how stacks work by building one. He needs assistance in developing a template stack class with the following methods:

- `push(element)`: Pushes an element onto the stack.
- `pop()`: Pops the top element from the stack.
- `top()`: Returns the top element of the stack without removing it.
- `size()`: Returns the number of elements in the stack.
- `empty()`: Checks if the stack is empty.

The stack class throws exceptions in the following situations:

- `StackOverflowException`: Thrown when the application tries to push data onto a full stack.
- `StackEmptyException`: Thrown when the application tries to pop data from an empty stack.

The program also includes a function called `manageStack` that displays a menu to the user. The user can create a stack of the desired size and choose options to check the top element, push elements onto the stack, or pop elements from the stack. The function handles these exceptions and displays suitable error messages before redisplaying the menu.

## Usage

To use the template stack class program, follow these steps:

1. Clone the repository: `git clone https://github.com/your/repository.git`
2. Navigate to the project directory: `cd template-stack-class`
3. Compile and run the program: `./template_stack`
4. Follow the on-screen menu instructions to create a stack, perform stack operations, and handle exceptions.

## Requirements

This program requires a C++ compiler that supports the C++11 standard.

## Contribution

Contributions to this project are welcome. If you find any issues or have suggestions for improvement, please create a new issue or submit a pull request.


## Contact

If you have any questions or suggestions regarding this program, please feel free to contact me at [messam.sde@gmail.com](mailto:messam.sde@gmail.com).
