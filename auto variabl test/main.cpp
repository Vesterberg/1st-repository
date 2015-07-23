#include <iostream>

using namespace std;

int main()
{
    auto shenanigans = "bogaloo";
    auto real = 123.456;
    auto whole = 123456789;
    decltype (real) n;
    decltype (whole) x;
    decltype (shenanigans) y;

    cout << shenanigans << endl;
    cout << y << endl;
    cout << real << endl;
    cout << n << endl;
    cout << whole << endl;
    cout << x << endl;
    y = "Electric";
    n = 23.123456789;
    x = 3073.123456789;
    cout << shenanigans << endl;
    cout << y << endl;
    cout << real << endl;
    cout << n << endl;
    cout << whole << endl;
    cout << x << endl;

    return 0;
}
