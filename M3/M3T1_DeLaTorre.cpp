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
    double area, area_2;

    // Ask for width, length of first rectangle
    cout << "Hello and welcome!" << endl;
    cout << "What is the width of the first rectangle? ";
    cin >> base;

    cout << "What is is the length of the first rectangle? ";
    cin >> height;

    // calculate area of first rectangle
    area = (base * height);

    // print the area
    cout << "The area of the first rectangle is " << area << endl;
    cout << endl;

    




    return 0;

}