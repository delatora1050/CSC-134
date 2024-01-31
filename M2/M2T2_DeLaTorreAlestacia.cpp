// CSC 134
// M2T2
// De La Torre, Alestacia
// 20240131
// Simple interactive store.


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int main();
	//Declare variables
	string name;
	int apples;
    double price_each;
    double total;

	// ask user for information
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Welcome to our orchard, " << name << endl;

    // Ask for the price of each
    cout << "What is the price for each apple? ";
    cin >> setprecision (2) >> fixed >> price_each;

    // Ask how many apple they want
    cout << "How many apples would you like? ";
    cin >> setprecision (2) >> fixed >> apples;
	

	//  TODO calculations
    total = apples * price_each;

	//Print output
    cout << endl;
	cout << "You ordered "<< apples << " apples."<< endl;
    cout << "Here is your receipt." << endl;
    cout << "----------------------" << endl;
	cout << "Apples: \t\t " << apples << endl;
	cout << "Price per apple: \t$" << price_each << endl;
	cout << "Total price: \t\t$" << total << endl;
	cout << endl;

	}