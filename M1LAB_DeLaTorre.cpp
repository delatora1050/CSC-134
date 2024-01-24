/*
CSC 134
M1 LAB - Apple Sales
De La Torre ,  Alestacia
20240124
*/



#include <iostream>
using namespace std;

int main()
{
    cout << "M1LAB - Apple Sales" << endl;
    cout << endl;
    
    // This program will simulate an apple orchard.
    // The owner's name 
    string name = "Alestacia";

    // number of apples owend
    int num_apples = 20;
    //Price per apple 
    double price_per_apple = 0.25;

    // Calculate the total price of the apples
    double total_Price = num_apples * price_per_apple;



    // Print all the information about the orchard

    cout << "Welcome to " << name << "'s Apple Orchard." << endl;
    cout << "We have " << num_apples << " apples in stock. \n";
    cout << "At the cost of $" << price_per_apple << " each.\n";
    cout << "If you want all the apples, the total is $" << total_Price << ".\n";

    cout << endl << endl;




    return 0;
    
}
