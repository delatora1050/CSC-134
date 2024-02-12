/*
CSC - 134
M2HW1 #2
De La Torre,Alestacia
20240211
*/

#include <iostream>
using namespace std;
int main() {
    int amt_people;
    int amt_pizza;
    int slice_per_pizza;
    int left_over_pizza;
    int slice_per_person = 3;

    cout << "Hello and welcome! How many guest will you be having? " << endl;
    cin >> amt_people;

    cout << "Awesome! How many pizza's will you like to order? " << endl;
    cin >> amt_pizza;

    count << "And how many slices per pizza would you like? " << endl;
    cin >> slices_per_pizza;

    left_over_pizza = (slice_per_person * amt_people) - slice_per_pizza;

    cout << "It looks like the amount of pizza left over is " << left_over_pizza << "." << endl;
    
}