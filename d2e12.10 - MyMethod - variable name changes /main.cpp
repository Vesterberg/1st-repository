#include <iostream>
using namespace std;

// By lifelength of variables I mean where the variables exist, how they exist, and change as they are used.
//Lets do this
static void MyMethod (int &y) //changed x for y// & turns the variable x into a reference
{
    cout << "MyMethod 1:" << y << endl; // change x for y
    y = 42;
    cout << "MyMethod 2:" << y << endl; // change x for y
}


//Start program
int main()
{
    int x = 100; //Creating and setting a value to variable x
    cout << "Main 1: " << x << endl; //Showing variable x's value
    MyMethod(x); // Applying mymethod function on variable x
    cout << "Main 2: " << x << endl; //Showing variable x's new value

    cin.get(); //pausing for any user keystroke before shutting down program
    return 0; // Same result, this works because the variables, despite their different names, calls from the same location in the memory(thereby calling on the same value that is stored at that memory location)
}
