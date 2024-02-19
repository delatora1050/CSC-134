/*
CSC 134
M2T1 - 
De La Torre, Alestacia
20240214
*/


// Ask for width, length of first triangle

#include <iostream>
using namespace std;

int main()
{
    // Declare var 
    double base, height;
    double base_2, height_2;
    double area_1, area_2;

    // Ask for width, length of first rectangle
    cout << "Hello and welcome to the area comparison Calculator!" << endl;
    cout << endl;
    cout << "What is the width of the first rectangle? ";
    cin >> base;

    cout << "What is is the height of the first rectangle? ";
    cin >> height;

    // calculate area of first rectangle
    area_1 = (base * height);

    // print the area
    cout << "The area of the first rectangle is " << area_1 << endl;
    cout << endl;

    // Start promp for number 2
    cout << "Please enter the base and height of second rectangle below." << endl;

    // Ask for width, length of second rectangle
    cout << "What is the base of the second rectangle? ";
    cin >> base_2;

    cout << "What is the height of the second rectangle? ";
    cin >> height_2;

    // calculate area of second rectangle
    area_2 = (base_2 * height_2);

    //print the area of 2nd rectangle
    cout << "The area of the second rectangle is " << area_2 << endl;
    cout << endl;

    if (area_1 > area_2)
    {
        cout << "The area of the first rectangle is greater than the second rectangle. " << endl;
        cout << endl;
    }
    else if (area_1 < area_2)
    {
        cout << "The area of the first rectangle is less than the second rectangle. " << endl;
        cout << endl;
    }
    else if (area_1 == area_2)
    {
        cout << "The area of the first rectangle is equal to the second rectangle. " << endl;
        cout << endl;
    }
    else 
    {
        cout << ("Something went wrong!") << endl;
        cout << endl;
    }




    return 0;

}