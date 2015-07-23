#include <iostream>
#include <iomanip> // access to manipulators
#include <cmath> // access to advanced math
using namespace std;

int main()
{
    double sum, interest; // creates two real nr variables (with decimal points access)
    int years; // creates whole nr variable
    cout << "Sum? ";
    cin >> sum;
    cout << "Interest? ";
    cin >> interest;
    cout << "Years invested? ";
    cin >> years;
    cout << setprecision(2)
    << fixed
    << "Capital turns into "
    << sum*pow(1+interest/100, years);
}
