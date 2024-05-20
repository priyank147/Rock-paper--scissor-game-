#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char getComputerMove() {
    int move = rand() % 3;
    if (move == 0) {
        return 'r'; // Rock
    } else if (move == 1) {
        return 'p'; // Paper
    }
    return 's'; // Scissors
}

int main() {
    srand(time(NULL));
    int t;
    cout<<"Enter the number of trial"<<endl;
    cin>>t;
while(t>0){
    cout << "Welcome to Rock-Paper-Scissors Game!" << endl;
    cout << "Enter 'r' for Rock, 'p' for Paper, or 's' for Scissors: ";

    char userMove;
    cin >> userMove;

    char computerMove = getComputerMove();

    cout << "Computer chose: " << computerMove << endl;

    if (userMove == computerMove) {
        cout << "It's a tie!" << endl;
    } else if ((userMove == 'r' && computerMove == 's') ||
               (userMove == 'p' && computerMove == 'r') ||
               (userMove == 's' && computerMove == 'p')) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
    t=t-1;
}

    return 0;
}
