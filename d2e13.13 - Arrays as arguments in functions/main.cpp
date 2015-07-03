#include <iostream>

using namespace std;

void ResetArray(int*x, int size)
{
    for(int i = 0; i < size; i++)
        x[i] = 0;
}

int main()
{
    const int size = 5;
    int temperature[] = { 17, -65, -20, 9, 42};

    //Writes whole array before reset
    for (int i = 0; i < size; i++)
        cout << temperature[i] << endl;

    ResetArray(temperature, size);

    //write out after reset
    for (int i = 0; i < size; i++)
        cout << temperature [i] << endl;
    cin.get();
    return 0;
}
