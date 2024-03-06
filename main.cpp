#include <iostream>
#include <cstdlib>
#include <ctime>

constexpr int minVal = 1;
constexpr int maxVal = 6;

int rollDice() {
    return std::rand() % (maxVal - minVal + 1) + minVal;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int rounds = 3;
    std::string name1, name2 ;
    std::cout << "Player 1 enter your name: ";
    std::cin >> name1;
    std::cout << "Player 2 enter your name: ";
    std::cin >> name2;
    std::cout << "Enter the number of rounds: ";
    std::cin >> rounds;


    int player1Score = 0, player2Score = 0;

    for (int round = 1; round <= rounds; ++round) {
        if(rounds > 3){
            std::cout << "Cannot be greater than 3 rounds" << '\n';
            break;
        }

        std::cout << '\n' << "Round " << round << ":\n";


        int firstDice = rollDice();
        int secondDice = rollDice();

        std::cout << name1 <<" rolled: " << firstDice << '\n'
                  << name2  << " rolled: " << secondDice << '\n';

        if (firstDice > secondDice) {
            std::cout << name1 << " wins this round!\n";
            ++player1Score;
        } else if (secondDice > firstDice) {
            std::cout << name2 << " wins this round!\n";
            ++player2Score;
        } else {
            std::cout << "It's a draw this round!\n";
        }

        std::cout << "Current Score: " << name1 << " = "  << player1Score << '\n'
                  << name2 << " = " << player2Score << "\n\n";
    }

    if (rounds > 3){
        std::cout << "Game Over";
    }
    else{
        std::cout << "Final Score: " << '\n' << name1 << " = " << player1Score << '\n'
                  << name2 << " = " << player2Score << '\n';

        if (player1Score > player2Score) {
            std::cout << name1 << " wins the game!\n";
        } else if (player2Score > player1Score) {
            std::cout << name2 << " wins the game!\n";
        } else {
            std::cout << "The game is a draw!\n";
        }
    }

    return 0;
}

