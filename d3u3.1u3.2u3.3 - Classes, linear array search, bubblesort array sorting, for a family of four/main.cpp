#include <iostream>
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

//Function: Main, start program
int main()
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
    cin.get();
    return 0;
}
