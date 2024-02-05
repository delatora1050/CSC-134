/* 
CSC 134
M2LAB1
De La Torre, Alestacia
20240205 
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare Variable
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    double length, width , height, volume;
    double cost, charge, profit;

    //Ask user for dimension
    cout << "What is the length? ";
    cin >> length;
    cout << "What is the width? ";
    cin >> width;
    cout << "What is the height? ";
    cin >> height;

    // Calculate Volume, cost of building crate, customer charge , profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;


    // Print calculations
    cout << "The volume is: " << setprecision(2) << fixed << volume << endl << endl;
    cout << "The cost to make the crate is $" << setprecision (2) << fixed << cost << endl;
    cout << "We will charge $" << setprecision (2) << fixed << charge << " to selling the crate." << endl;
    cout << "Our profit will be $" << setprecision (2) << fixed << profit << endl;
    cout << endl;
    return 0;
}