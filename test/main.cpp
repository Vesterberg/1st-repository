// Programmet slumpar fram och skriver ut en lottorad med 7 tal mellan 1 och 35

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int lottorad[7]; // Ett heltalsfält som lagrar lottoraden
    bool lika=false

    for(int i=1; i<7; i++){
        lottorad[i]=rand()%35+1; // Slumpar ett tal mellan 1 och 35

        for(int j=1; j<i; j++) // Loopar igenom de tidigare slumpade tal och kontrollerar om det aktuella talet redan har dragits
            if(lottorad[i]=lottroad[j])
                lika=true;

        if(lika) // Om det aktuella talet redan dragits så minskas i med 1. Man går alltså tillbaka ett steg i loopen och slumpar ett nytt tal
            i--;
            lika=false;

        else // Om det aktuella talet inte hade dragits tidigare så skrivs det ut
            cout << lottorad[i] << endl;
    }

    return 0;
}
4
