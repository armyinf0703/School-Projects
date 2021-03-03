/*
Name: Tyler Johnston
Summary of Program: Takes previous water meter reading, and current reading and error checks + charges for monthly owed expenses 
Current Date: 30 JAN 2021

*/

#include <iostream>
using namespace std;// So we don't have to type STD:: on every line

int main() {

double currentMeterReading = 0.0, previousMeterReading = 0.0, totalOwedCurrently = 0.0, gallonsUsed = 0.0; // using double variables for most of the program
const int CHARGE = 7; // setup the monthly charge as a const as it won't change.
const double MIN_CHARGE = 16.67; // set the base charge as a const since it won't change.

cout << "Please enter the meter reading from this month: "; // first descriptive input line. 
cin >> currentMeterReading; // Goes with line above

cout << "Please enter the meter reading from last month: ";// Our previous reading we had gotten
cin >> previousMeterReading;// Input for above line

gallonsUsed = currentMeterReading - previousMeterReading; // I take current meter reading, - previous meter reading and have that =. Later on I check to see if current is less than previous, for error checking.
totalOwedCurrently = CHARGE * (gallonsUsed/1000) + MIN_CHARGE; // Math for the above, I take the gallons, divide by 1000 to get the base number, * that vs the 7$ per gallon charge and then + the base charge.


if (currentMeterReading >= previousMeterReading) //If statement described above that checks if current is lower than previous. Because if current is lower, than it will run else statement and print an error message.
{
    cout <<"The customer used " << gallonsUsed <<" Gallons of water this month. " <<"From the last reading the customer had a previous reading of "<< previousMeterReading <<" gallons." << " Total Charges for this month is: $"<< totalOwedCurrently; // fairly robust print message, however it spits out current reading, previous reading and then whats owed. 
}
else {
  cout <<"Please recheck your inputs as the values are negative in nature"; // else statement for handling if current is less than previous. 
  return 1;
}

    return 0;
}