/*
CSC 134
Number Grade to leader
De La Torre, Alestacia
20240214
*/



#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declare var
    double num_grade;

    //ask fo num grade
    cout << "Hello and welcome to the the number grade to letter grade conversion calculator!" << endl;
    cout << "Please enter you number grade: ";
    cin >> num_grade;

    num_grade = ceilf(num_grade);

    // find letter grade (if else, etc)
    if( num_grade >= 90 && num_grade <= 100)
    {
        cout << "Congrats! Your letter grade equivelent is: A " << endl;
    }
    else if (num_grade >= 80 && num_grade <= 89 )
    {
        cout << "Awesome! Your letter grade equivelent is : B " << endl;
    }
    else if (num_grade >= 70 && num_grade <= 79 )
    {
        cout << "Cool! Your letter grade equivelent is : C " << endl;
    }
    else if (num_grade >= 60 && num_grade <= 69 )
    {
        cout << "Almost there! Your letter grade equivelent is : D " << endl;
    }
    else if (num_grade >= 0 && num_grade <=  59)
    {
        cout << "Try again ! Your letter grade equivelent is : F " << endl;
    }
   else if (num_grade <= 0 || num_grade >=  100)
    {
        cout << "Not a valid number. Please try again. " << endl;
    }   
    return 0;

}