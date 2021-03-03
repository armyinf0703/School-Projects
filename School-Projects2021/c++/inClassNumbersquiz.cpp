/*
Name: Tyler Johnston
Summary: Quiz problem for a rectangle length and width
*/
#include <iostream>
using namespace std;


int main ()
{
    int length, width = 0; // two variables needed, a length which we will get from the user and width which will come from doing maths
    cout << "Please input the length of a rectangle: "; // a kind prompt asking for length 
    cin >> length; // user input spot for length

    width = length /  1.9; // I used length, divided by 1.9 to get my width. 

    cout << "The width of the rectangle is: " << width << " While the length given by the user was: " << length; // I printed width first, then re-stated the user given length

return 0; // telling my program it can terminate and go away now. 
}