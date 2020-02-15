/*
 * Title: Print Name one line
 * Programmer: Tyler Johnston
 * Date: 2-12-2020
 * Assignment 7
*/
#include<iostream>
#include<string>
using namespace std;
string firstname, lastname;
int main ()
{
    cout<<"Please input your first name: "; //first name
    cin>>firstname;
    cout<<"Please input your last name: "; //last name
    cin>>lastname;
    cout<<"Your full name is:  "<<firstname+" "<<lastname<<endl; //user inputs are printed in this line
    return 0;
}
