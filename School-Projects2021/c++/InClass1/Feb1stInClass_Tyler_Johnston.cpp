
#include <iostream>
using namespace std;// So we don't have to type STD:: on every line

int main() {
char premierClub;
double totalSale = 0.0, finalCost = 0.0, premierClubMath = 0.0;
const double SHIPPING_DISCOUNT = 0.99, SHIPPING_NO_DISCOUNT = 4.99; 

cout << "Please enter the total sale: ";
cin >> totalSale;

cout << "Are they Premier Club Members (Enter 1 for Yes): ";
cin >> premierClub;

if (totalSale >= 100)
{ 
    if (premierClub == 'y'|| premierClub == 'Y') 
    {
     premierClubMath= ((totalSale)*10/100);
     finalCost = totalSale - premierClubMath + SHIPPING_DISCOUNT;
     cout << "Final Cost is: " << finalCost;
    }
    else
    {
    finalCost = totalSale + SHIPPING_DISCOUNT;
    cout << "Final Cost is: " << finalCost;
    }
}
else
{
    if (premierClub == 'y'|| premierClub == 'Y') 
    {
     premierClubMath= ((totalSale)*10/100);
     finalCost = totalSale - premierClubMath + SHIPPING_NO_DISCOUNT;
    cout << "Final Cost is: " << finalCost;
    }
    else
    {
    finalCost = totalSale + SHIPPING_NO_DISCOUNT;
    cout << "Final Cost is: " << finalCost;
    }
}
return 0;
}