/*
CSC 134
De La Torre, Alestacia
3/6/2024
M4LAB1- Video game loop
*/


#include <iostream>
using namespace std;

int main()
{
    cout << "M4LAB1" << endl;
    int width = 0;
    int height = 0;

    cout << "Whats the width? ";
    cin >> width;

    cout << "Whats the height? ";
    cin >> height;

    // first a row
    for(int i = 0; i < width; i++)
    {
        cout << "# ";
    }
    cout << endl << endl;

    //next colum
      for(int i = 0; i < height; i++)
    {
        cout << "#" << endl;
    }
    cout << endl << endl;

    //put it all together - nested loops
    for(int i=0; i < height; i++)
    {
        for(int j=0; j < width; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}
