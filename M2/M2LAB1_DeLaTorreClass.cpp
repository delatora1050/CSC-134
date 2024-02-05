/* 
CSC 134
M2LAB1
De La Torre, Alestacia
20240205 
*/


#include <iostream>
using namespace std;

int main()
{
    // Take 1 - just a rectangle
    //Declare variables
    double length, width, height;
    double volume;
    
    //Ask for user input
    cout << "What is the length? ";
    cin >> length;
    cout << "What is the width?  ";
    cin >> width;
    cout << "What is the height? ";
    cin >> height;

    // DO Calculations
    volume = length * width * height;

    // Print the answer 
    cout << "The volume is: " << volume << endl;

    return 0;
}