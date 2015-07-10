#include <iostream>
#include <string>

using namespace std;

const int Antalfamilj = 4; // Sätter antalet familjemedlemmar.

// ClASS:
class Person

{
public:
    string namn;
    int alder;

    void SkrivUt()
    {
        cout << "Namn: " << namn << ", alder: " << alder << endl;
    }
};

int linsok(Person familj[], int Antalfamilj, int a)
{
    int n = Antalfamilj;
    for(int i = 0; i < n; i++) // Går igenom listan.
    {
        // Checks if it is the correct number
        if(familj[i].alder == a)
            return i;
    }
    return -1; // Personen hittades inte.
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

void bubblesort(Person familj[], int Antalfamilj)
{
        // Den yttre loopen, går igenom hela listan
        for(int i = 0; i < Antalfamilj; i++)
        {
        int nrleft = Antalfamilj - i; // För att se hur många som redan gåtts igenom

        for(int j = 0; j < nrleft; j++)
            {
                if(familj[j].alder > familj[j+1].alder) // Jämför elementen
                {
                    byt(familj[j], familj[j+1]);
                }
            }
        }

    for(int i = 0; i < Antalfamilj; i++)    // Skriv ut listan
    {
        familj[i].SkrivUt();
    }
}

int main()
{
    Person familj[Antalfamilj];

    // Läser in namn och ålder.
    familj[0].namn = "Mats";
    familj[0].alder = 52;
    familj[1].namn = "Carina";
    familj[1].alder = 48;
    familj[2].namn = "Alex";
    familj[2].alder = 20;
    familj[3].namn = "Emily";
    familj[3].alder = 18;

  // Sorterar personerna i listan och skriver ut dem i ordning, yngst först.
    bubblesort(familj, Antalfamilj);
    for(int i = 0; i < Antalfamilj; i++)
    {
        familj[i].SkrivUt();
    }

    int hittaIndex = linsok(familj, Antalfamilj, 4);
    if(hittaIndex >= 0)
    {
        familj[hittaIndex].SkrivUt();
    }
    else
    {
        cout << "Hittade ingen med angiven alder." << endl;
    }

    cin.get();
    return 0;
}
