#include <iostream>
#include <iomanip> // inkl manipulatorer
using namespace std;

int main()
{
    int units;
    double per_unit, price, rebate;
    const double rebate_procent = 10, limit = 1000;
    cout << "Number of units?" << endl;
    cin >> units;
    cout << "Price per unit?" << endl;
    cin >> per_unit;
    price = per_unit * units;

    if (price > limit)
    {
        rebate  = price * rebate_procent / 100;
        price   = price - rebate;
    }
    cout    << "Price becomes: "
            << setprecision(2) // Lets the price be printed to 2 decimal points
            << fixed //makes sure that the numbers keep being printed to 2 decimal points
            << price //prints the value of price to the console
            << endl;
}
