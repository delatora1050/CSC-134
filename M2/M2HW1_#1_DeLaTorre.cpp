/*
CSC - 134
M2HW1 #1
De La Torre,Alestacia
20240211
*/


#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;
int main() {
    string name;
    double num_dep;
    double num_with;
    int acct_num = rand();
    double acct_bal= 0;
    double total;

    cout << "Hello! What is the name on the account? ";
    getline(cin, name);
    
    cout << "How much would you like to deposit? ";
    cin >> num_dep;

    cout << "How much would you like to widthdraw? ";
    cin >> num_with;

    acct_bal = (num_dep + acct_bal);
    acct_bal = (acct_bal - num_with);
    total = acct_bal;
    cout << endl;


    cout << "Printed is " << name << "'s account summary" << endl;
    cout << "Your Account number is #" << acct_num <<"." << endl;
    cout << "Your current balance is $" << setprecision (2) << fixed << total << endl;
    cout << endl;
    
    return 0;
}