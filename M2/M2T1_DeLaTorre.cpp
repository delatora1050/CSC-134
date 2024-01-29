/*
CSC - 134
M2T1 - Receipt
De La Torre, Alestacia 
20240129
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "M2T1 \t\t\t Receipt" << endl;
    cout << endl;
    // set up variables
    string meal = "Carñe Asada Fries";
    // all in $, except percentage
    // Fix 0 place holder
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 0.00;
    double total_price = 0.00;


    // TODO calculations


    //TODO Print receipt. fixed decimals
    cout << meal << "\t$"   << meal_price << endl;
    cout <<"Tax: \t\t\t$"    << tax_amount << endl;
    cout << "Total: \t\t\t$" << tax_amount << endl;

    return 0;
}