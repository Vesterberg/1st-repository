#include <iostream>

using namespace std;

//Classy class class: contains a person
class Person
{
public:
    char* name;
    int personnummer;

    //Method: sets info required
    void SetInfo (char* _name, int _personnummer)
    {
        name = _name;
        personnummer = _personnummer;
    }
};

//Function: LinearSearch finds person in a list
int LinearSearch (Person* personArray, int key)
{
    for (int i = 0; i < 10; i++) // Searches whole list
    {
        //Are these the numbers you are looking for?
        if (personArray[i].personnummer == key)
            return i;
    }
    return -1; // These are not the numbers you are looking for *Waves jedi hand*
}

//Function: Main, start program!

int main()
{
    cout << "Hello world!" << endl;

    //creates a list of personclass persons and fills it
    Person myList[10];
    myList[0].SetInfo("Lisa", 330112);
    myList[1].SetInfo("Pelle", 420721);
    myList[2].SetInfo("Fia", 421221);
    myList[3].SetInfo("Nisse", 691122);
    myList[4].SetInfo("Kalle", 811126);
    myList[5].SetInfo("Klara", 840717);
    myList[6].SetInfo("Maja", 920411);
    myList[7].SetInfo("Stina", 940723);
    myList[8].SetInfo("Olle", 950318);
    myList[9].SetInfo("Eva", 791222);

    //Searches list linearly
    int index = LinearSearch(myList, 920411);

    //prints results
    if(index == -1)
        cout << "These are not the persons you are looking for";
    else
        cout << "The person you are searching for is named "
             << myList[index].name <<
             " and exists on index number " << index;
    cin.get();
    return 0;
}
