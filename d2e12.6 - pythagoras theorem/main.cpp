#include <iostream>
#include <cmath>
using namespace std;

//Function, calculates with pythagoras theorem
static double Pythagoras (int a, int b)
{
    // Pythagoras theorem:
    int c2 = (a * a) + (b * b);

    //calculates length of sole hypotenuse by squaring c2 and returns value:
    int c = sqrt(c2);
    return c;
}

int main() // Start of program
{
    //Type in the two shorter sides of a triangle
    double a, b;
    cout << "Write length of short side 1:";
    cin >> a;
    cout << "Write length of short side 2:";
    cin >> b;

    //Calculates pythagoras theorem and outputs answer
    double c = Pythagoras(a, b);
    cout << c;
    cin.get();
    return 0;
}
