#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int userChoice, computerChoice;
    int userScore = 0, computerScore = 0;

    while (true)
    {
        cout << "\n===== Rock Paper Scissors =====\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "4. Stop\n";
        cout << "Enter your choice: ";
        cin >> userChoice;

        // Stop the game
        if (userChoice == 4)
        {
            cout << "\nGame Stopped!\n";
            break;
        }

        // Invalid input
        if (userChoice < 1 || userChoice > 4)
        {
            cout << "Invalid choice! Please enter 1 to 4.\n";
            continue;
        }

        // Computer choice
        computerChoice = rand() % 3 + 1;

        // Display computer choice
        cout << "\nComputer chose: ";
        if (computerChoice == 1)
            cout << "Rock";
        else if (computerChoice == 2)
            cout << "Paper";
        else
            cout << "Scissors";

        cout << endl;

        // Determine winner
        if (userChoice == computerChoice)
        {
            cout << "Result: Draw!\n";
        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2))
        {
            cout << "Result: You Win this Round!\n";
            userScore++;
        }
        else
        {
            cout << "Result: Computer Wins this Round!\n";
            computerScore++;
        }

        // Scoreboard
        cout << "\n------ Scoreboard ------\n";
        cout << "You      : " << userScore << endl;
        cout << "Computer : " << computerScore << endl;
        cout << "------------------------\n";

        // Check overall winner
        if (userScore == 5)
        {
            cout << "\n🎉 Congratulations! You reached 5 wins and won the game!\n";
            break;
        }

        if (computerScore == 5)
        {
            cout << "\n🤖 Computer reached 5 wins. Computer wins the game!\n";
            break;
        }
    }

    cout << "\nFinal Score:\n";
    cout << "You      : " << userScore << endl;
    cout << "Computer : " << computerScore << endl;

    cout << "\nThank you for playing!\n";

    return 0;
}
