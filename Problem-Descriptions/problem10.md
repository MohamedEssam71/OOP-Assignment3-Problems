# Date Converter Program

This program converts dates from numerical month/day format to alphabetic month/day format. It handles exceptions for invalid month and day inputs, throwing and catching `MonthError` and `DayError` exceptions.

## Problem Description

Ihab Ashraf wants to write a program that converts dates from numerical month/day format to alphabetic month/day format. The program should handle the following exceptions:

- `MonthError`: Thrown when the user enters an invalid month number (integers from 1 to 12).
- `DayError`: Thrown when the user enters an invalid day number (integers from 1 to either 29, 30, or 31, depending on the month).

For simplicity, the program always allows 29 days for February.

## Usage

To use the date converter program, follow these steps:

1. Clone the repository: `git clone https://github.com/your/repository.git`
2. Navigate to the project directory: `cd date-converter`
3. Compile and run the program: `./date_converter`
4. Enter the date in the numerical format (e.g., 1/31 or 01/31).
5. The program will convert the date to the alphabetic format (e.g., January 31) and display the result.
6. If an exception occurs due to an invalid month or day, the program will catch the exception and display an appropriate error message.

## Requirements

This program requires a C++ compiler that supports the C++11 standard.

## Contribution

Contributions to this project are welcome. If you find any issues or have suggestions for improvement, please create a new issue or submit a pull request.

## Contact

If you have any questions or suggestions regarding this program, please feel free to contact me at [messam.sde@gmail.com](mailto:messam.sde@gmail.com).
