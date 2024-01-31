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
    cin >> price_each;

    // Ask how many apple they want
    cout << "How many apples would you like? ";
    cin >> apples;
	

	//  TODO calculations
    total = apples * price_each;

	//Print output
    cout << endl;
	cout << "You ordered "<< apples << " apples."<< endl;
    cout << "Here is your receipt." << endl;
    cout << endl;
    cout << "------------------------------" << endl;
	cout << "Apples: \t\t " << setprecision (2) << fixed << apples << endl;
	cout << "Price per apple: \t$" << price_each << endl;
	cout << "Total price: \t\t$" << setprecision (2) << fixed << total << endl;
    cout << "------------------------------" << endl;
    cout << "Thank you for shpping with us! \342\230\272" << endl;
	cout << endl;

	}