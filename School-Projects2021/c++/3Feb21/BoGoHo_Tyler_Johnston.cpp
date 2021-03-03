//===============================================
// Project Name: totalCost_Johnston.cpp
// Author: Tyler Johnston
// Description : For totaling a BOGO item
// Date project completed: 2/2/2021
//===============================================
#include<iostream>
#include<string>
using namespace std;
//Lines 10-13 setup my functions
void FirstSale();
void SecondSale();
void UserInputs();
//Lines 15-16 are my variables I use for the two sales, total price, and the bogo item price
double firstSale = 0.0, secondSale = 0.0, finalCost = 0.0, bogoPrice = 0.0;
const double BOGO = 50;
int main () {
//I user an function for my user inputs to make my code generally cleaner
UserInputs();
//First if for if first sale is greater than or equal to second sale. See function on line 46 for clear cut breakdown of math used.
if (firstSale >= secondSale)
{
    FirstSale();
}
//Else if for if first sale is less than second sale. See function on line 53 for clear cut breakdown of math used.
else if (firstSale < secondSale)
{
    SecondSale();
}
//I used the above else if because I wanted to use my else for error checking incase someone puts not valid inputs etc.
else
{
    cout << "Error please try again";
}
return 0;
}
//My user inputs of getting the first and second sale price of items.
void UserInputs()
    {
    cout << "Please enter the first item sale price: "; // First input for entering the total sale
    cin >> firstSale;

    cout << "Please enter the second item sale price: "; // Asking for the 10% discount later on 
    cin >> secondSale;
    }
// First sale math, I took the second sale, * it by my bogo const of 50, then divided that by 100 to equal the bogo price.
void FirstSale()
    {
    bogoPrice = secondSale * BOGO/100;
    finalCost = firstSale + bogoPrice;
    cout << "The final total is: $" << finalCost << "The total for the BOGO item was: $" << bogoPrice;        
    }
// Second sale math, I took the first sale, * it by my bogo const of 50, then divided that by 100 to equal the bogo price.
void SecondSale()
    {
    bogoPrice = firstSale * BOGO/100;
    finalCost = secondSale + bogoPrice;
    cout << "The final total is: $" << finalCost << " The total for the BOGO item was: $" << bogoPrice;
    }