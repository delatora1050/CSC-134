// CSC 134
// M1LAB
// De La Torre, Alestacia
// 20240126


#include <iostream>
using namespace std;

int main(){
	int main();
	//This program will simulate an apple orchard.
	// The owner's name
	string name = "Alestacia";
	// number of apples ownes
	int apples = 100;
	// price per apple
	double price_per_apple = 0.25;

	// calculate the total price of the appples
	double total_price = apples * price_per_apple;

	//print all the information about the orchard
	cout << "Welcome to " << name;
	cout << "'s apple orchard." << endl;
	cout << endl;
	cout << "We have "<< apples;
	cout << " apples in stock." << endl;
	cout << "Apple are currently $";
	cout << price_per_apple << " each." << endl;
	cout << "If you want them all, that will be $" << total_price << endl;

	cout << endl;

	}