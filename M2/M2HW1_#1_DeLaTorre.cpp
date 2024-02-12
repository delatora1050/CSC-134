


#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    double num_dep;
    double num_with;
    int acct_num = 158763;
    double acct_bal= 0;
    double total;

    cout << "Hello! What is the name on the account? ";
    getline(cin, name);
    
    cout << "How much would you like to deposit? ";
    cin >> num_dep;

    cout << " How much would you like to widthdraw? ";
    cin >> num_with;

    acct_bal = (num_dep + acct_bal);
    acct_bal = (acct_bal - num_with);
    total = acct_bal;
    cout << endl;


    cout << "Printed is " << name << "'s account summary" << endl;
    cout << "Your Account number is #" << acct_num <<"." << endl;
    cout << "Your current balance is $" << total << endl;
    cout << endl;
    
    return 0;
}