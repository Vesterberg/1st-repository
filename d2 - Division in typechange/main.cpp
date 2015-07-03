#include <iostream>

using namespace std;

int main()
{
    int nr1 = 1, nr2 = 4;
    float squared;

    squared = nr1 / nr2;
    cout << squared << " <- without typechange" << endl;
    squared = (float)nr1 / nr2;
    cout << squared << " <- with typechange" << endl;

    float tf=14, nf=5;
    int t=14, n=5;

    cout << tf/nf << " <- float calculations of 14/5" << endl;
    cout << t/n << " <- integer calculations of 14/5" << endl;
    cin.get();
    return 0;
}
