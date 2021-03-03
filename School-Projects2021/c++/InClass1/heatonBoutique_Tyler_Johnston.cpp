/*
Name: Tyler Johnston
Summary of Program: Takes a total sale price and if else for greater than = to 100, gives a discount if a member and then gives total cost with shipping.
Current Date: 1 Feb 2021

*/
#include <iostream>
using namespace std;// So we don't have to type STD:: on every line

int main() {
char premierClub; // character for selecting y for yes
double totalSale = 0.0, finalCost = 0.0, premierClubMath = 0.0;
const double SHIPPING_DISCOUNT = 0.99, SHIPPING_NO_DISCOUNT = 4.99; 

cout << "Please enter the total sale: "; // First input for entering the total sale
cin >> totalSale;

cout << "Are they Premier Club Members (Enter y for Yes): "; // Asking for the 10% discount later on 
cin >> premierClub;

if (totalSale >= 100) 
{ 
    if (premierClub == 'y'|| premierClub == 'Y') // I ran y and Y incase people have caps lock on.
    {
     premierClubMath= ((totalSale)*10/100);
     finalCost = totalSale - premierClubMath + SHIPPING_DISCOUNT;
     cout << "Final Cost is: $" << finalCost;
    }
    else
    {
    finalCost = totalSale + SHIPPING_DISCOUNT;
    cout << "Final Cost is: $" << finalCost;
    }
}
else
{
    if (premierClub == 'y'|| premierClub == 'Y') 
    {
     premierClubMath= ((totalSale)*10/100);
     finalCost = totalSale - premierClubMath + SHIPPING_NO_DISCOUNT;
    cout << "Final Cost is: $" << finalCost;
    }
    else
    {
    finalCost = totalSale + SHIPPING_NO_DISCOUNT;
    cout << "Final Cost is: $" << finalCost;
    }
}
return 0;
}