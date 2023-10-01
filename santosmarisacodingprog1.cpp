#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() 
{
    string player_1,
    player_2;

    unsigned seed;

    int dice_p1,
    dice_p2;
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);


    cout << "Please enter a name for Player 1." << endl;
    cin >> player_1;

    cout << "Please enter a name for Player 2." << endl;
    cin >> player_2;

    seed = time(0);
    srand(seed);
    dice_p1 = rand() % 20 + 1;
    dice_p2 = rand() % 20 + 1;


    cout << player_1 << " rolled a " << dice_p1 << " and " << player_2 << " rolled a " << dice_p2 << "." << endl;

    if (dice_p1 == 1) {
        SetConsoleTextAttribute(screen, 12);
        cout << player_1 << "'s roll resulted in a... CRITICAL FAILURE!" << endl;
    }
    else if (dice_p1 == 20) {
        SetConsoleTextAttribute(screen, 10);
        cout << player_1 << "'s roll resulted in a... CRITICAL SUCCESS!" << endl;
    } 

    if (dice_p2 == 1) {
        SetConsoleTextAttribute(screen, 12);
        cout << player_2 << "'s roll resulted in a... CRITICAL FAILURE!" << endl;
    }
    else if (dice_p2 == 20) {
        SetConsoleTextAttribute(screen, 10);
        cout << player_2 << "'s roll resulted in a... CRITICAL SUCCESS!" << endl;
    } 

    if (dice_p1 > dice_p2) {
        SetConsoleTextAttribute(screen, 7);
        cout << player_1 << " wins!!" << endl;
    }
    else if (dice_p1 < dice_p2) {
        cout << player_2 << " wins!!" << endl;
    }
    else if (dice_p1 == dice_p2) {
        cout << player_1 << " and " << player_2 << " were evenly matched!" << endl;
    }
}