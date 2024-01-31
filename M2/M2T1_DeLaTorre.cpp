// CSC 134
// M2T1
// De La Torre, Alestacia
//20240124


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    cout << "M2T1 \t\t\t Receipt" << endl;
    cout << endl;
    cout << "Thank you for dinning with us!" << endl;
    cout << "------------------------------" << endl;
    string meal = "Carñe Asada Fries";
    // inter variables
    // all $ except for percentage
    double meal_price = 5.99;
    double tax_percentage = 0.08;
    double tax_amount = 0;
    double total = 0;

    // TODO Calculations
    tax_amount = meal_price * tax_percentage;
    total = meal_price + tax_amount;


    // print receipt
    // TODO: Fix Decimals to 2 <iomanip>
    cout << fixed << setprecision(2);
    cout << meal << "\t$"  << meal_price << endl;
    cout << "Tax:\t\t\t$"  << tax_amount << endl;
    cout << "------------------------------" << endl;
    cout << "Total:\t\t\t$"<< total << endl;
    cout << endl;

    return 0;
}