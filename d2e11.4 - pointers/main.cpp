#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Swedish");
    cout << "Hello world!" << endl;

    int x = 42; // x är en variabel, 42 är variabelns summa
    cout << &x << endl;  //& kan beskrivas som "returnera adressen till pekaren "x" "
    int* pointer = &x; // pekare kan lagra en adress //*tecknet bestämmer att namnet efteråt är en pekare
    cout << "värdet vid adressen " << pointer << " är " << *pointer << endl;

    x = 2; // ändrar variabelns summa
    cout << "värdet vid adressen " << pointer << " är " << *pointer << endl;

    *pointer = 99; // ändrar pekarens (variabelns ramplats?) summa
    cout << "värdet vid adressen " << pointer << " är " << *pointer << endl;

    cin.get();
    return 0;
}
