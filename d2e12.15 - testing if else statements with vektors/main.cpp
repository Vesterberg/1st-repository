#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc > 1)
        cout << "Hello " << argv[1]; // gives hello test! in windows, gives Hello in linux
    else
        cout << "Hello World";
    cin.get();
    return 0;
}
