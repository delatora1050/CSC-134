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
    int slice_count;
    int slice_eat_total;

    cout << "Hello and welcome! How many guest will you be having? " << endl;
    cin >> amt_people;

    cout << "Awesome! How many pizza's will you like to order? " << endl;
    cin >> amt_pizza;

    cout << "And how many slices per pizza would you like? " << endl;
    cin >> slice_per_pizza;

    slice_count = slice_per_pizza * amt_pizza;
    slice_eat_total = slice_per_person * amt_people;
    left_over_pizza = slice_count - slice_eat_total;

    if (left_over_pizza <= 0)
    {
        cout << "There is no more pizza slices left over!"<< endl;
        cout << endl;
    }
    else
    {
        cout << "It looks like the amount of pizza slices left over is " << left_over_pizza << "." << endl;
        cout << endl;
    }


    return 0;
}