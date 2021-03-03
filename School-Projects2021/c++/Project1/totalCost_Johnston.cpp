//===============================================
// Project Name: totalCost_Johnston.cpp
// Author: Tyler Johnston
// Description : For calculating latex balloon sales
// Date project completed: 1/13/2021
//===============================================
#include<iostream>
#include<string>
//Lines 10-12 setup my functions
void Mylar();
void Both();
void Latex();
    //Lines 12-15 setting up Variables for use
    int NumberOfLatexBalloons, NumberOfMylarBalloons;
    float CostOfLatexBalloons = 1.5, CostOfMylarBalloons = 2.5, SalesTaxRate = .04, TotalSale, TotalOfMylar, TotalOfLatex, TotalSaleTax, FinalSale;
int main ()
{


    char Sale;
    using namespace std;    //Declaring I am using namespace std in my main function
    cout << "Hello and welcome to Balloon Emporium Balloon calculator\n"; //Starting "hello welcome to my program"
    do { // used a do loop for running multiple times
        cout << "Would you like to make a sale? (Y/N): "; // allowing a check for if an employee wants to use this program or not
        cin >> Sale; // getting client input from line 20 question
        if (Sale == 'N' || Sale == 'n'){ // Line 21-24 setup an if else for if the client picks N, then it will end the program and exit the loop first instead of sifting through the entire program. 
            cout<<"Have a wonderful day";
            return 0;
        }
        else {// else statement for if anything other than N is selected"
        cout <<"Please enter the amount of Latex Balloons purchased: ";// Line 26-29 are having the client input how many of each balloon for that sale. 
        cin >> NumberOfLatexBalloons;
        cout <<"Please enter the amount of Mylar Balloons purchased: ";
        cin >> NumberOfMylarBalloons;
        if ((NumberOfLatexBalloons >= 1) && (NumberOfMylarBalloons >= 1)) // Lines 30-50 are a series of if else if statements for if a combo of balloons are selected, I did this in attempt to streamline code.
        {
            Both(); //Calling Function
        }
        else if ((NumberOfLatexBalloons >= 1) && (NumberOfMylarBalloons == 0))
        {
            Latex(); //Calling just my Latex function
        }
        else if ((NumberOfLatexBalloons == 0) && (NumberOfMylarBalloons >= 1))
        {
            Mylar(); //Calling just my Mylar function

        }
        else 
        {
            cout << "Please try again, make sure and enter an amount of balloons";
        }

        cout << "Total sale cost is $" << FinalSale <<"\n"; // final output line with the total
    }
    }
    while (Sale == 'Y' || Sale == 'y');    //saying "while Sale = Y, keep looping at the end" 
    return 0;
}
// Lines 56-76 are my function setups which have all my formulas in them
    void Mylar()
    {
        TotalOfLatex = NumberOfMylarBalloons * CostOfMylarBalloons;
        TotalSale = TotalOfLatex;
        TotalSaleTax = TotalSale * SalesTaxRate;
        FinalSale = TotalSale + TotalSaleTax;    
    }
    void Latex()
    {
        TotalOfLatex = NumberOfLatexBalloons * CostOfLatexBalloons;
        TotalSale = TotalOfLatex;
        TotalSaleTax = TotalSale * SalesTaxRate;
        FinalSale = TotalSale + TotalSaleTax;        
    }
    void Both()
    {
        TotalOfLatex = NumberOfLatexBalloons * CostOfLatexBalloons;
        TotalOfMylar = NumberOfMylarBalloons * CostOfMylarBalloons;
        TotalSale = TotalOfLatex + TotalOfMylar;
        TotalSaleTax = TotalSale * SalesTaxRate;
        FinalSale = TotalSale + TotalSaleTax;        
    }