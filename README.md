# Rock-Paper-Scissors Game

## Classic Command-Line Rock-Paper-Scissors Game

Welcome to the Rock-Paper-Scissors Game! This simple command-line application allows you to play the classic game of Rock-Paper-Scissors against the computer.

## Introduction

This project is a C++ implementation of the Rock-Paper-Scissors game. The user can input their choice of rock, paper, or scissors, and the computer will randomly generate its choice. The program then determines the winner based on the traditional rules of the game.

## Installation and Usage Instructions

### Prerequisites

To compile and run this application, you need to have a C++ compiler installed on your machine. The most commonly used compiler is `g++`, which is part of the GNU Compiler Collection (GCC).

## Usage

1. The program will prompt you to enter your choice: 'rock', 'paper', or 'scissors'.
2. The computer will randomly select its choice.
3. The program will display the result of the game (win, lose, or tie).

### Example

```bash
Enter 'rock', 'paper', or 'scissors': rock
Both the user and the computer selected rock. Tie
```

## Contributor Expectations

If you'd like to contribute to this project, please follow these guidelines:

1. **Fork the repository**: Create a personal copy of the repository on your GitHub account.
2. **Create a new branch**: Use `git checkout -b branch-name` to create a new branch for your feature or bugfix.
3. **Commit your changes**: Use descriptive commit messages to explain your changes.
4. **Push to the branch**: Push your changes to your forked repository using `git push origin branch-name`.
5. **Create a pull request**: Submit a pull request to the original repository with a detailed description of your changes.

## Known Issues

- The input validation only checks for the exact strings 'rock', 'paper', or 'scissors'. Any other input is considered invalid.
- The program does not currently handle upper-case inputs or variations in spelling.

## Code Overview

The main logic of the game is contained within a `while` loop that continuously prompts the user for input until the program is manually terminated. The computer's choice is randomly generated using the `rand()` function, and the results are determined based on a series of conditional statements.

```cpp
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    while (1) {
        string rock, paper, scissor, input;
        int rand1;
        cout << "Enter 'rock', 'paper', or 'scissors': ";
        cin >> input;
        srand(time(NULL));
        rand1 = rand() % 3 + 1;

        if (input == "rock" && rand1 == 1) {
            cout << "Both the user and the computer selected rock. Tie" << endl;
        }
        else if (input == "rock" && rand1 == 2) {
            cout << "The user selected rock and the computer selected paper. You lose" << endl;
        }
        else if (input == "rock" && rand1 == 3) {
            cout << "The user selected rock and the computer selected scissors. You win" << endl;
        }
        else if (input == "paper" && rand1 == 1) {
            cout << "The user selected paper and the computer selected rock. You win" << endl;
        }
        else if (input == "paper" && rand1 == 2) {
            cout << "The user selected paper and the computer selected paper. Tie" << endl;
        }
        else if (input == "paper" && rand1 == 3) {
            cout << "The user selected paper and the computer selected scissors. You lose" << endl;
        }
        else if (input == "scissors" && rand1 == 1) {
            cout << "The user selected scissors and the computer selected rock. You lose" << endl;
        }
        else if (input == "scissors" && rand1 == 2) {
            cout << "The user selected scissors and the computer selected paper. You win" << endl;
        }
        else if (input == "scissors" && rand1 == 3) {
            cout << "The user selected scissors and the computer selected scissors. Tie" << endl;
        }
        else {
            cout << "You inputted: " << input << endl << "Which is an invalid input." <<endl;
        }
    }
    return 0;
}
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

- [C++ Documentation](https://en.cppreference.com/w/)
- [GNU Compiler Collection (GCC)](https://gcc.gnu.org/)

Feel free to reach out with any questions or suggestions!
