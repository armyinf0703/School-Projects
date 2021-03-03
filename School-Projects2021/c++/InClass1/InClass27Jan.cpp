#include <iostream>
using namespace std;

int main() {
    
    
    int userChoiceMath = 0;
    double janSales = 0.0, febSales = 0.0, result = 0.0;
    
    cout << "Please enter 1 for Addition or anything else for Subtraction: ";
    cin >> userChoiceMath;
    cout << "Please enter January Sales: ";
    cin >> janSales;
    cout << "Please enter Febuary Sales: ";
    cin >> febSales;
    //userChoiceMath = 1;

    if (userChoiceMath == 1)
    {
        result = janSales + febSales;
        cout << "The total between January sales of $" << janSales << " and Febuary Sales of $" << febSales << " is $" << result;
    }
    else {
        result = janSales - febSales;
        cout << "The total between January sales of $" << janSales << " and Febuary Sales of $" << febSales << " is $" << result;
    }
return 0;
}