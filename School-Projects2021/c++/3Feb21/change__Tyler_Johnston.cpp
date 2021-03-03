//===============================================
// Project Name: totalCost_Johnston.cpp
// Author: Tyler Johnston
// Description : For handling change return for a bill paid.
// Date project completed: 2/3/2021
//===============================================
#include<iostream>
#include<string>
#include<cmath>
using namespace std;


//Lines 10-13 setup my functions
void Balance();
void FinalOutput();
void UserInputs();
void ChangeOwed();
//Lines 19-21 Handle my variables I used, const for doing math, normal double for the bill, paid, and end balance. int for handling the final outputs of number of change in an int style. 
const double DOLLARS = 1.0, QUARTERS = 0.25, DIMES = 0.10, NICKELS = 0.05, PENNIES = 0.01;
double billDue = 0.00, paid = 0.00, balance = 0.00;
int dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
int main () {
//I user an function for my user inputs to make my code generally cleaner
UserInputs();
//My if statement, I checked if paid was greater than or equal to bill due, it would then run my final output function
if (paid >= billDue)
{
    FinalOutput();
}
// Else statement which runs if paid is less than bill due. Warns that not enough has been paid. 
else
{
    cout << "Error! Customer still owes money!";
}
return 0;
}
//My user inputs of getting how much the customer owes, and how much they have paid.
void UserInputs()
    {
    cout << "Please enter how much the customer owes: "; // First input for entering the total sale
    cin >> billDue;

    cout << "Please enter how much the customer paid: "; // Asking for the 10% discount later on 
    cin >> paid;
    }
// Function for handling the user inputs of Func UserInputs, I basic subtraction to figure out how much is excess
void Balance()
    {
    balance = billDue - paid;    
    }
//Lines 53-55  Setup a function to handle my final output. This made setting up more organized for the above code, I used abs to force a postive number because it kept displaying numbers as a negative no matter how I changed the math. 
void FinalOutput()
    {
    Balance();
    ChangeOwed();
    cout << "Total due was: $" << billDue <<"\n The total change owed is: \n" << abs(dollars) <<" Dollars \n" << abs(quarters) <<" Quarters \n"<< abs(dimes) << " Dimes \n" << abs(nickels) << " Nickels \n" << abs(pennies) << " Pennies. ";
    }
//Lines 60-69 Function for handling all the math for figuring out the excess change, I tried using % but it kept short changing by 1, so I swapped to using const and doing it a bit more code intensive way. 
void ChangeOwed()
    {
    dollars = (balance/ DOLLARS);
    balance = balance - dollars;
    quarters = (balance/ QUARTERS);
    balance = balance - (quarters*QUARTERS);
    dimes = (balance / DIMES);
    balance = balance - (dimes*DIMES);
    nickels = (balance / NICKELS);
    balance = balance - (nickels*NICKELS);
    pennies = (balance / PENNIES);
    balance = balance - (pennies*PENNIES);
    }