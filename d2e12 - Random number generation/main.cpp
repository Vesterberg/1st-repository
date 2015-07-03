#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    for(int i=0; i<7; i++)
        cout << rand() % 35 + 1 << endl;

//    int nr;
//    cout << "Hello world!" << endl;
  //  nr = rand(); //nr is assigned a random number between 0 and 32767
    //cout << nr << endl;
    //nr = rand() % n; //rand number between 0 and n-1?
    //cout << nr << endl;
    //kast = rand() % 6+1; //rand number between 1 and 6
    //cout << nr << endl;
    //srand(32)

    return 0;
}
