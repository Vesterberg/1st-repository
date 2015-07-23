// Programmet slumpar fram och skriver ut en lottorad med 7 tal mellan 1 och 35

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int lottorad[7]; // Ett heltalsfält som lagrar lottoraden
    bool lika=false;

    for(int i=1; i<7; i++)
    {//x
        lottorad[i]=rand()%35+1; // Slumpar ett tal mellan 1 och 35
    }//x

    for(int j=1; j<i; j++)// Loopar igenom de tidigare slumpade tal och kontrollerar om det aktuella talet redan har dragits
    {
        if(lottorad[i]=lottorad[j]) //<--felstavning lottroad var inte definerad tidigare. Datorn vet inte vilken typ eller vilka värden den variabeln ska ha.
        {
            lika=true;
        }
    }//x

    if(lika) // Om det aktuella talet redan dragits så minskas i med 1. Man går alltså tillbaka ett steg i loopen och slumpar ett nytt tal //x lika=true ist lika
    { //<-- { klammerparantes saknas.
        i--;
        lika=false;
    } //<-- } klammerparantes saknas.
    else // Om det aktuella talet inte hade dragits tidigare så skrivs det ut
    { //<-- { klammerparantes saknas.
        cout << lottorad[i] << endl;
    }
    return 0;
}
