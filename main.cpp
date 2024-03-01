#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    int minVal = 1;
    int maxVal = 6;

    int firstDice = (rand() % (maxVal - minVal + 1) + minVal);
    int secondDice = (rand() % (maxVal - minVal + 1) + minVal);

    cout << "The first player played: " << firstDice << endl
         << "The second player played: " << secondDice << endl;

    if(firstDice > secondDice){
        cout << "The first player won";
    }
    else if(secondDice>firstDice){
        cout << "The second player won";
    }
    else{
        cout << "Draw between them";
    }

    return 0;
}
