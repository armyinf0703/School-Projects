
#include<iostream>
#include<string>

int main ()
{
    //Lines 12-15 setting up Variables for use
    int totalSandwhiches, loopcount = 0;
    char Meat;
    float roastbeef = 2.5, Additionalmeat, totalroastbeef, totalbasicmeat,finaloutput;
    using namespace std;    //Declaring I am using namespace std in my main function
    cout << "Hello and welcome to Norbot Roast beef calculator\n"; //Starting "hello welcome to my program"
    do { // used a do loop for running multiple times
        cout <<"Please enter the base amount of sandwhiches: ";// Line 14-30 are having the client deal with setting up sandwhiches, getting total of meat, then finally converts it to oz 
        cin >> totalSandwhiches;
        cout <<"Additional meat?(Y/N): ";
        cin >> Meat;
        if  (Meat == 'y'||'Y') {
            cout <<"How much extra meat in oz? ";
            cin>> Additionalmeat;
            totalbasicmeat = roastbeef * totalSandwhiches ;
            totalroastbeef = totalbasicmeat + Additionalmeat;
            finaloutput = totalroastbeef/16; 
            loopcount +1;
    }
        else {
            totalbasicmeat = roastbeef * totalSandwhiches ;
            totalroastbeef = totalbasicmeat;
            finaloutput = totalroastbeef/16;
            loopcount + 1;

    }

        cout << "Total estimation of roast beef is" << " " << finaloutput <<"\n"; // final output line with the total
    }
    while (loopcount == 3);
    return 0;
}