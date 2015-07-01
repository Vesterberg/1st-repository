#include <iostream>
using namespace std;

// By lifelength of variables I mean where the variables exist, how they exist, and change as they are used.
//Lets do this
static void MyMethod (int x)
{
    cout << "MyMethod 1:" << x << endl;
    x = 42;
    cout << "MyMethod 2:" << x << endl;
}


//Start program
int main()
{
    int x = 100; //Creating and setting a value to variable x
    cout << "Main 1: " << x << endl; //Showing variable x's value
    MyMethod(x); // Applying mymethod function on variable x
    cout << "Main 2: " << x << endl; //Showing variable x's new value

    cin.get(); //pausing for any user keystroke before shutting down program
    return 0;
}
