#include <iostream>
using namespace std;


int main ()
{
if (12/2 == 4+1)
cout <<"6";
cout <<"12/2 != 4+1 "<< endl; 

    int number1, number2, multiple3Count = 0, multiple5Count = 0, temp;


    cout << "Please enter a number in whole form: ";
    cin >> number1;

    cout << "Please enter another number in whole form: ";
    cin >> number2;

    if (number1 < number2) 
    {
        temp = number1;
        while (temp <= number2){
            if (temp % 3 == 0)
            {
                multiple3Count++;
            }
            if (temp % 5 == 0)
            {
                multiple5Count++;
            }
        temp++;
        }
        cout << "Multiples of 3 between " << number1 << " and " << number2 << ": " << multiple3Count << "\n";
        cout << "Multiples of 5 between " << number1 << " and " << number2 << ": " << multiple5Count << "\n";
    }
    else {
        temp = number2;
        while (temp <= number1){
            if (temp % 3 == 0)
            {
                multiple3Count++;
            }
            if (temp % 5 == 0)
            {
                multiple5Count++;
            }
        temp++;
        }
        cout << "Multiples of 3 between " << number1 << " and " << number2 << ": " << multiple3Count << "\n";
        cout << "Multiples of 5 between " << number1 << " and " << number2 << ": " << multiple5Count << "\n";
    }
}