#include "iostream"

using namespace std;

void Addera()
{
    int nummer1;
    int nummer2;
    cout << "Skriv in ett nummer" << endl;
    cin >> nummer1;
    cout << "Skriv in ett nummer som adderas till det första" << endl;
    cin >> nummer2;
    int summa = nummer1 + nummer2;

    cout << "Summan av de två blir: " << summa << endl;
}

void Momsen()
{
    int pris;
    float moms = 1.25;
    cout << "Skriv in priset på varan utan moms" << endl;
    cin >> pris;
    pris = pris*moms;
    cout << "Momsen är 25%, priset på varan blir då: " << pris << endl;
}

void ToPercentage()
{
    float decimaltal;
    float decimaltalomvandling = 100;
    float heltal;
    cout << "Skriv in decimaltalet ni vill omvandla till ett heltal i procent" << endl;
    cin >> decimaltal;
    heltal = decimaltal*decimaltalomvandling;
    cout << heltal << "%" << endl;
}

void myndig()
{
    int alder;
    cout << "Hur gammal är ni? ";
    cin >> alder;

    if (alder<18)
    {
        cout << "Ni är för ung för att få se det här! ...eller skrev ni in fel ålder? rätta: ";
        cin >> alder;
    }
    cout <<"Grattis! Ni är antingen myndig eller en lögnare. Välkommen!" << endl;
}

void Hello(char* namn)
{
    cout << "Hej, " << namn << ". Jag heter CMD." << endl;
}


int main()
{
    setlocale(LC_ALL,"Swedish"); //svenska språkbokstäver
    cout << "Hello world!" << endl;
    Hello("Kalle");
    myndig();
    ToPercentage();
    Addera();
    Momsen();
    cin.get();
    return 0;
}
#include "iostream"

using namespace std;

void Addera()
{
    int nummer1;
    int nummer2;
    cout << "Skriv in ett nummer" << endl;
    cin >> nummer1;
    cout << "Skriv in ett nummer som adderas till det första" << endl;
    cin >> nummer2;
    int summa = nummer1 + nummer2;

    cout << "Summan av de två blir: " << summa << endl;
}

void Momsen()
{
    int pris;
    float moms = 1.25;
    cout << "Skriv in priset på varan utan moms" << endl;
    cin >> pris;
    pris = pris*moms;
    cout << "Momsen är 25%, priset på varan blir då: " << pris << endl;
}

void ToPercentage()
{
    float decimaltal;
    float decimaltalomvandling = 100;
    float heltal;
    cout << "Skriv in decimaltalet ni vill omvandla till ett heltal i procent" << endl;
    cin >> decimaltal;
    heltal = decimaltal*decimaltalomvandling;
    cout << heltal << "%" << endl;
}

void myndig()
{
    int alder;
    cout << "Hur gammal är ni? ";
    cin >> alder;

    if (alder<18)
    {
        cout << "Ni är för ung för att få se det här! ...eller skrev ni in fel ålder? rätta: ";
        cin >> alder;
    }
    cout <<"Grattis! Ni är antingen myndig eller en lögnare. Välkommen!" << endl;
}

void Hello(char* namn)
{
    cout << "Hej, " << namn << ". Jag heter CMD." << endl;
}


int main()
{
    setlocale(LC_ALL,"Swedish"); //svenska språkbokstäver
    cout << "Hello world!" << endl;
    Hello("Kalle");
    myndig();
    ToPercentage();
    Addera();
    Momsen();
    cin.get();
    return 0;
}
