#include<iostream>
#include<string>
using namespace std;
string firstname, lastname;
int main ()
{
    cout<<"Enter your first name: ";
    cin>>firstname;
    cout<<"Enter your last name: ";
    cin>>lastname;
    cout<<"Your full name is:  "<<firstname+" "<<lastname<<endl;
    return 0;
}
