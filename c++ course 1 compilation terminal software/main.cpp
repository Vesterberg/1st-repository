#include <iostream>
#include "temperature.h"
using namespace std;

//Classy class class: contains a person formula
class Person
{
public:
    string namn;
    int alder;

    //Method: sets info required
    void SetInfo (string _namn, int _alder)
    {
        namn = _namn;
        alder = _alder;
    }
    //Method: prints name and age of every Person
    void SkrivUt ()
    {
        cout << namn << ", " << alder << endl;
    }
};
void Addera()
{
    int nummer1;
    int nummer2;
    cout << "Write the starting value" << endl;
    cin >> nummer1;
    cout << "Write the value to be added" << endl;
    cin >> nummer2;
    int summa = nummer1 + nummer2;

    cout << "Sum: " << summa << endl;
}

void Momsen()
{
    int pris;
    float moms = 1.25;
    cout << "Write price before tax" << endl;
    cin >> pris;
    pris = pris*moms;
    cout << "Moms 'sales tax' is 25%, price of good with moms added is then " << pris << endl;
}

void ToPercentage()
{
    float decimaltal;
    float decimaltalomvandling = 100;
    float heltal;
    cout << "Write the number that will be turned into units of procent" << endl;
    cin >> decimaltal;
    heltal = decimaltal*decimaltalomvandling;
    cout << heltal << "%" << endl;
}

void myndig()
{
    int alder;
    cout << "How old are you? ";
    cin >> alder;

    if (alder<18)
    {
        cout << "You are still a minor. Or did you misstype? Try again: ";
        cin >> alder;
    }
    cout <<"You are an adult!" << endl;
}

void Hello(char* namn)
{
    cout << "Hey, " << namn << ". My name is terminal!" << endl;
}

void bubblesort(Person p[], int n)
{
    n = 4;
    int i = 0;
    //outer loop to check the list
    for (i = 0; i < n; i++)
    {
        //inner loop searches element per element in the list
        int nrLeft = n - i; // Keeps track of nr of elements searched so far

        for (int j = 0; j < nrLeft; j++)
        {
            if (p[j].alder > p[j+1].alder) //Compares elements to see if the age of the person in the first element is larger than the age of the person in the second element
            {
                //Swap places
                int temp = p[j].alder;
                p[j].alder = p[j+1].alder;
                p[j+1].alder = temp;
            }
        }
    }
}
//Function: linsok finds person in a list
int linsok (Person p[], int n, int a) //n = max index, p[] = Person Array, a = key = search term = age (alder)
{
    //n = 4; // total nr of filled index elements
    int i = 0;
    for (i = 0; i < n; i++) // run parameters that prompts a search for the whole list //n = max index
    {
        if (p[i].alder == a) //Are these the numbers you are looking for?
            return i; // Do you have numbers left to search?
    }

    return -1; // These are not the numbers you are looking for *Waves jedi hand*. -1 means that i is less than 0 which ends the loop because it is outside of the run parameters.
}

int main()
{
    while (true)
    {
        //Write menu:
        cout << "Pick:\n";
        cout << "[B]oiling water check\n";
        cout << "[I]nteger celcius to Fahrenheit converter\n";
        cout << "[D]ecimal celcius to Fahrenheit converter\n";
        cout << "[A]verage number of 5\n";
        cout << "[L]inear search, and bubble sort example\n";
        cout << "[O]f age check\n";
        cout << "[S]ee how much of a price the moms 'sales tax' is\n";
        cout << "[T]est addition with the terminal\n";
        cout << "[C]hange a number to procent units\n";
        cout << "[G]reet the terminal\n";
        cout << "[Q]uit\n";

        char menuSelection; //Enables users to pick an option
        cin >> menuSelection;

        if (menuSelection == 'B' || menuSelection == 'b')
        {
            cout << "What is the waters temperature?" << endl;
            int temperature;
            cin >> temperature;

            if (IsBoiling(temperature)) //Checks if it boils
            {
                cout << "Its boiling!\n";
            }
            else
            {
                cout << "Not boiling yet\n";
            }
        }
        else if (menuSelection == 'I' || menuSelection == 'i')
        {
            //Overlay 1 test, integer celcius to farenheit converter
            int fahrenheitI = CelciusToFahrenheit(100);
            cout << fahrenheitI << "\n";
        }
        else if (menuSelection == 'D' || menuSelection == 'd')
        {
            //Overlay 2 test
            float fahrenheitF = CelciusToFahrenheit(97.3f);
            cout << fahrenheitF << "\n";
        }
        else if (menuSelection == 'A' || menuSelection == 'a')
        {
            //Creates array:
            int temperature[5];

            // Assigns array's elements
            temperature[0] = 17;
            temperature[1] = -65;
            temperature[2] = -20;
            temperature[3] = 9;
            temperature[4] = 42;

            //sum the elements of the array and print it out in the terminal
            int sum = temperature[0]+temperature[1]+temperature[2]+temperature[3]+temperature[4];
            cout << "Average temperature is: " << sum/5 << endl;
        }
        else if (menuSelection == 'L' || menuSelection == 'l')
        {
            cout << "List without Bubblesort" << endl;

            //creates a list of person class persons and fills it
            Person familj[4];
            familj[0].SetInfo("Alex", 55);
            familj[0].SkrivUt();
            familj[1].SetInfo("Kim", 51);
            familj[1].SkrivUt();
            familj[2].SetInfo("Sam", 21);
            familj[2].SkrivUt();
            familj[3].SetInfo("Mio", 16);
            familj[3].SkrivUt();

            cout << "List with Bubblesort" << endl;

            bubblesort(familj, 4); //<--What arguments should I use to correctly activate bubblesort? It works fine if I place the bublesort code directly inside of main(). But it wont work if I use void bubblesort(Person p[], int n) which is required by the assignment
            int i = 0;
            // Prints entire list
            for(int i = 0; i < 4; i++)
            {
                cout << familj[i].namn << ", " << familj[i].alder << endl;
            }
            //Searches list linearly
            int index = linsok(familj, 4, 21); //i = index 20 = age, 4 = nr of elements to be searched
            //prints results
            if(i == -1) //i = index
            {
                cout << "None of them are the person you are looking for" << endl;
            }
            else
            {
            cout << "The person you are searching for is named "
                 << familj[index].namn //i = index
                 << ", their age is "
                 << familj[index].alder //i = index
                 << " and is listed on index slot number "
                 << index << endl; //n = index
            }
        }
        else if (menuSelection == 'O' || menuSelection == 'o')
        {
            myndig();
        }
        else if (menuSelection == 'S' || menuSelection == 's')
        {
            Momsen();
        }
        else if (menuSelection == 'T' || menuSelection == 't')
        {
            Addera();
        }
        else if (menuSelection == 'C' || menuSelection == 'c')
        {
            ToPercentage();
        }
        else if (menuSelection == 'G' || menuSelection == 'g')
        {
            char* name;
            cout << "What is your name?" << endl;
            cin >> name;
            Hello(name);
        }
        else if (menuSelection == 'Q' || menuSelection == 'q')
        {
            break;
            //breaks loop
        }
        else
        {
            cout << "Invalid option\n";
        }
    }
}
