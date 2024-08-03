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
        cout << "Enter 'rock', 'paper', or 'scissor's': ";
        cin >> input;
        srand(time(NULL));
        rand1 = rand() % 3 + 1;

        if (input == "rock" && rand1 == 1) {
            cout << "Both the user and the computer selected rock. Tie" << endl;
        }
        if (input == "rock" && rand1 == 2) {
            cout << "The user selected rock and the computer selected paper. You lose" << endl;
        }
        if (input == "rock" && rand1 == 3) {
            cout << "The user selected rock and the computer selected scissor's. You win" << endl;
        }
        if (input == "paper" && rand1 == 1) {
            cout << "The user selected paper and the computer selected rock. You win" << endl;
        }
        if (input == "paper" && rand1 == 2) {
            cout << "The user selected paper and the computer selected paper. Tie" << endl;
        }
        if (input == "paper" && rand1 == 3) {
            cout << "The user selected paper and the computer selected scissor's. You lose" << endl;
        }
        if (input == "scissor's" && rand1 == 1) {
            cout << "The user selected scissor's and the computer selected rock. You lose" << endl;
        }
        if (input == "scissor's" && rand1 == 2) {
            cout << "The user selected scissor's and the computer selected paper. You win" << endl;
        }
        if (input == "scissor's" && rand1 == 3) {
            cout << "The user selected scissor's and the computer selected scissor's. Tie" << endl;
        }
    }
    return 0;
}


