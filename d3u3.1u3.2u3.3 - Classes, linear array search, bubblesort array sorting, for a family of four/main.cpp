#include <iostream>

using namespace std;

class Person //Classy class class: for classy persons
{
public:
    string namn;
    int alder;
    Person(string _namn, int _alder);

    void SkrivUt()
    {
        cout << namn << ", " << alder << endl;
    }

    void SetInfo (string _namn, int _alder)
    {
        namn = _namn;
        alder = _alder;
    }
};



int main()
{
    Person familj[4];    //creates a list of 4 class type persons and fills it
    familj[0].SetInfo("Lisa", 7);
    familj[1].SetInfo("Pelle", 42);
    familj[2].SetInfo("Fia", 37);
    familj[3].SetInfo("Kalle", 12);

    //linsök här

    cin.get();
    return 0;
}
