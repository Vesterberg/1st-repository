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

//Function: linsok finds person in a list
int linsok (Person p[], int n, int a) //n = max index, p[] = Person Array, a = key = search term = age (alder)
{
    n = 4; // total nr of filled index elements
    int i = 0;
    for (i = 0; i < 4; i++) // run parameters that prompts a search for the whole list //n = max index
    {
        if (p[i].alder == a) //Are these the numbers you are looking for?
            return i; // Do you have numbers left to search?
    }
    return -1; // These are not the numbers you are looking for *Waves jedi hand*. -1 means that i is less than 0 which ends the loop because it is outside of the run parameters.
}

void byt(Person &p, Person &q)
{
    Person temp;
    temp.namn = p.namn;
    temp.alder = p.alder;
    p.namn = q.namn;
    p.alder = q.alder;
    q.namn = temp.namn;
    q.alder = temp.alder;
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
                //byt(p[j].alder, p[j+1].alder);
                //Swap places
                int temp = p[j].alder;
                p[j].alder = p[j+1].alder;
                p[j+1].alder = temp;
            }
        }
    }
}
//Function: Main, start program
int main()
{
    cout << "List without Bubblesort" << endl;

    //creates a list of person class persons and fills it
    Person p[4];
    p[0].SetInfo("Alex", 15);
    p[0].SkrivUt();
    p[1].SetInfo("Kim", 51);
    p[1].SkrivUt();
    p[2].SetInfo("Sam", 54);
    p[2].SkrivUt();
    p[3].SetInfo("Mio", 20);
    p[3].SkrivUt();

    cout << "List with Bubblesort" << endl;
    int n;
    int i;
    bubblesort(p[i], n);

    // Prints entire list
    for(int i = 0; i < 4; i++)
    {
        cout << p[i].namn << ", " << p[i].alder << endl;
    }

    //Searches list linearly
    linsok(p, 0, 20); //i = index 20 = age

    //prints results
    if(i == -1) //i = index
        cout << "None of them are the person you are looking for";
    else
        cout << "The person you are searching for is named "
             << p[i].namn //i = index
             << ", hins age is "
             << p[i].alder //i = index
             << " and is listed on index slot number "
             << i; //n = index
    cin.get();
    return 0;
}
