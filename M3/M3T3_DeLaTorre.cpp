/*
CSC 134
M3T3 - Craps 
De La Torre, Alestacia
20240221
*/



#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Welcome to the Craps Table" << endl;
    // Set up Var
    int roll;
    int die_1, die_2;
    srand(time(0));


    // ROLL Dice
    //cout << "What did you roll? ";
   //cin >> roll;
   die_1 = rand() % 6 + 1;
   die_2 = rand() % 6 + 1;
    roll = die_1 + die_2;

    // Results
    cout << "Your roll was: ( " << die_1 << " + " << die_2 << " ) -> " << roll << endl;
    if (roll == 7 || roll == 11){
        cout << "You Win!!" << endl;
    }
    else if ( roll == 2 || roll == 3 || roll == 12){
        cout << "You lose..." << endl;
    }
    else {
        cout << "Your point is: " << roll << endl;
        cout << "TODO: roll the point" << endl;
    }





    return 0;

}