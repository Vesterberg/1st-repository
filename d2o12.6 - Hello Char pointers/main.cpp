#include <iostream>

using namespace std;

void hello(char* namn)
{
    cout << "Hey, " << namn << ". My name is text." << endl;
}

int main()
{
    hello("Kalle");
    cin.get();
    return 0;
}
