# Backtracking: Youssef's Message Decoder

A recursive backtracking program to divide Youssef's messages into meaningful words.

## Problem Description

Youssef Elzayat has a faulty SPACE key on his keyboard, which prevents him from sending messages with proper spaces between words. He needs a program to divide his messages into individual meaningful words, so his friends can understand them.

The program should follow these rules:
- It starts by trying to form words starting from the first letter of the message.
- If it finds a word in the English dictionary, it calls itself on the remaining text.
- The program stops as soon as it can divide the message into a complete sentence with all its words in the dictionary.
- If no solution is found, the program exhaustively explores all possible solutions and then fails.

For example, if the message is "Iwearmyshoes," the program will attempt to divide it as follows:
- "I" is a word in the dictionary, so it repeats on the remaining letters.
- It tries "w," which is not a word, and then "we," which is a word. It repeats on the rest.
- It tries "a," which is a word, and repeats on the rest. (So far, we have "I we a.")
- Then it tries "r," "rm," and "rmy," but none of them are words. At this point, it backtracks and tries "ar," which is a word, and repeats on the rest ("myshoes").
- The first valid solution found is "I we ar my shoes."

## Getting Started

### Prerequisites

- C++ compiler (e.g., g++)
- English dictionary file (e.g., `dictionary.txt`)

### Installation

1. Clone the repository: `git clone https://github.com/your-username/your-repo.git`
2. Compile the C++ program: `g++ message_decoder.cpp -o message_decoder`
3. Download or create an English dictionary file (`dictionary.txt`) and place it in the same directory as the program.

## Usage

1. Run the program: `./message_decoder`
2. Enter the message you want to decode without spaces.
3. The program will output the decoded message if a valid solution is found.

## Contributing

Contributions are welcome! If you find any issues or want to enhance the program, feel free to open a pull request or submit an issue on the GitHub repository.

When contributing, please follow the existing code style and provide clear commit messages.

## Contact

If you have any questions or suggestions regarding this program, please feel free to contact me at [messam.sde@gmail.com](mailto:messam.sde@gmail.com).
