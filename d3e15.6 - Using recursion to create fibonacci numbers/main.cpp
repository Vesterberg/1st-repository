#include <iostream>

using namespace std;

int main()
{
    cout << "Hello Fibonnaci!" << endl;

    static int Fibonacci (int f)
    {
        if (f <= 2) //Checks if it is the first fibonacci nrs
            return 1; // returns 1
        else
            return Fibonacci (f - 1) + Fibonacci(f - 2); // Recursion
    }

    return 0;
}
