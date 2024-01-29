// CSC 134
// M1Bonus
// De La Torre, Alestacia
// 20240129



#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Problem # 1\n" << "Given a rectangle with height 8 and width 10, calculate and print the area." << endl;
    int height = 8;
    int width = 10;
    double tri_area = 0.5 * height * width;
    cout << "The answer is " << tri_area << endl;
    cout <<endl;

    cout << "Problem #2: \n" << "Assume a product is sold for $99.99, and sales tax is 8%. Display the product price, ";
    cout << "the amount of sales tax, and then the final cost including sales tax."<< endl;
    double original_price = 99.99;
    double sales_tax_per_cent = 0.08;
    // find a way to round the number.
    float tax_price = (original_price * sales_tax_per_cent);
    cout << tax_price << endl;
    // cout << final_price << endl;



    return 0;
}