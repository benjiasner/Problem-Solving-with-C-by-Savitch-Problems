/*
The purpose of this problem is to write a program that 
can allow two users to play rock paper scissors against one another.
*/

#include <iostream>
using namespace std;

// function declarations:
bool checkCorrectInputFalse(char playerInput);

int main() {

    char player1Input, player2Input;

    cout << "*****************************************\n";
    cout << "*** WELCOME TO ROCK, PAPER, SCISSORS! ***\n";
    cout << "This game allows you and a friend to play \n rock paper scissors against each other!\n";
    cout << "Player 1: please enter 'R' for rock, 'P' for paper, or 'S' for scissors: ";
    cin >> player1Input;
    cout << "\n";

    while ( checkCorrectInputFalse(player1Input) ){
        cout << "Player 1, You did not input an R, P, or S.  Please do so to continue: ";
        cin >> player1Input;
        cout << "\n";
    }

    cout << "Thanks, Player 1.  Player 2: please enter 'R' for rock, 'P' for paper, or 'S' for scissors: ";
    cin >> player2Input;
    cout << "\n";

    while ( checkCorrectInputFalse(player2Input) ){
        cout << "Player 1, You did not input an R, P, or S.  Please do so to continue: ";
        cin >> player2Input;
        cout << "\n";
    }
    
    if (player1Input == player2Input) {
        cout << "You both picked ";
        cout << player1Input;
        cout << ", so the game ends in a tie!\n";
    } else if ( (player1Input == 'R') && (player2Input == 'P')) {
        cout << "Paper beats rock, Player 2 wins!\n";
    } else if ( (player2Input == 'R') && (player1Input == 'P')) {
        cout << "Paper beats rock, Player 1 wins!\n";
    } else if ( (player1Input == 'R') && (player2Input == 'S')) {
        cout << "Rock beats Scissors, Player 1 wins!\n";
    } else if ( (player2Input == 'R') && (player1Input == 'S')) {
        cout << "Rock beats Scissors, Player 2 wins!\n";
    } else if ( (player2Input == 'P') && (player1Input == 'S')) {
        cout << "Scissors beats Paper, Player 1 wins!\n";
    } else {
        cout << "Scissors beats Paper, Player 2 wins!\n";
    }

    return 0;
}

bool checkCorrectInputFalse(char playerInput) {

    const char R = 'R';
    const char P = 'P';
    const char S = 'S';

    if ((playerInput == R) || (playerInput == P) || (playerInput == S)) {
        return false;
    } else {
        return true;
    }
}