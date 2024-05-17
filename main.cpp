/* CSCI 200: Assignment 1: A1 - Rock Paper Scissor Throw Down!
 *
 * Author: Shaurya Saxena
 * Resources used: NONE
 *
 * Create a rock, paper, scissors game that the player can play against the computer.
 */
// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cstdlib>
#include <ctime>
#include <cctype>

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {
    srand(static_cast<int>(time(nullptr)));

    char choice;
    string playerMove;
    string computerMove;
    int playerCounter = 0;
    int computerCounter = 0;
    int tieGameCounter = 0;

    while (true) 
    {
        cout << "Welcome one and all to a round of Rock, Paper, Scissors!" << endl;
        cout << "(Enter P, R or S)" << endl;
        cout << "Player one: ";
        cin >> choice;
        cout << "" << endl;

        if (tolower(choice) == 'r' )
        {
            playerMove = "Rock";
        }
        else if (tolower(choice) == 's')
        {
            playerMove = "Scissors";
        }
        else
        {
            playerMove = "Paper";
        }

        cout << "Player choose " << playerMove << endl;

        int randomValue = rand() % 3;
        
        if (randomValue == 0) 
        {
            computerMove = "Rock";
        }
        else if (randomValue == 1)
        {
            computerMove = "Scissors";
        }
        else if (randomValue == 2)
        {
            computerMove = "Paper";
        }

        cout << "Computer choose " << computerMove << endl;
        cout << "" << endl;

        if (playerMove == "Rock" && computerMove == "Rock")
        {
            cout << "Tie Game." << endl;
            tieGameCounter++;
        }
        else if (playerMove == "Rock" && computerMove == "Scissors")
        {
            cout << "Rock beats Scissors." << endl;
            cout << "Player wins!" << endl;
            playerCounter++;
        }
        else if (playerMove == "Rock" && computerMove == "Paper")
        {
            cout << "Paper beats Rock." << endl;
            cout << "Computer wins!" << endl;
            computerCounter++;
        }
        else if (playerMove == "Scissors" && computerMove == "Rock")
        {
            cout << "Rock beats Scissors." << endl;
            cout << "Computer wins!";
            computerCounter++;
        }
        else if (playerMove == "Scissors" && computerMove == "Scissors")
        {
            cout << "Tie Game." << endl;
            tieGameCounter++;
        }
        else if (playerMove == "Scissors" && computerMove == "Paper")
        {
            cout << "Scissors beats Paper." << endl;
            cout << "Player wins!" << endl;
            playerCounter++;
        }
        else if (playerMove == "Paper" && computerMove == "Rock")
        {
            cout << "Paper beats Rock." << endl;
            cout << "Player wins!" << endl;
            playerCounter++;
        }
        else if (playerMove == "Paper" && computerMove == "Scissors")
        {
            cout << "Scissors beats Paper." << endl;
            cout << "Computer wins!" << endl;
            computerCounter++;
        }
        else if (playerMove == "Paper" && computerMove == "Paper")
        {
            cout << "Tie Game." << endl;
            tieGameCounter++;
        }

        char playAgain;
        cout << "" << endl;
        cout << "Do you want to play again? (Y/N) ";
        cin >> playAgain;
        cout << "" << endl;

        if (tolower(playAgain) == 'n')
        {
            break;
        }
    }
    cout << "Thanks for playing!" << endl;
    cout << "You won " << playerCounter << " game(s), lost " 
        << computerCounter << " game(s), and tied "
        << tieGameCounter << " game(s).";
    return 0; // signals the operating system that our program ended OK.
}
