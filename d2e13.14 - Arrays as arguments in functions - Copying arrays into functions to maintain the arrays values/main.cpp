#include <iostream>

using namespace std;

static int* CopyArray(int* x, int size)
{
    int* newArray = new int[size];
    for(int i = 0; i < size; i++)
        newArray[i] = x[i];

    return newArray;
}

int main()
{
    const int size = 5;
    int temperature[] = { 17, -65, -20, 9, 42};
    int* copy;

    copy = CopyArray(temperature, size);

    //Writes whole array before reset
    for (int i = 0; i < size; i++)
        cout << copy[i] << endl;
+    cin.get();
    return 0;
}
