#include <iostream>

using namespace std;

int main()
{

    cout << "Without Bubblesort" << endl;

    int myList[] = {15, 3, 7, 1, 42};
    int max = 4;

    // Prints entire list
    for(int i = 0; i < 5; i++)
    {
        cout << myList[i] << endl;
    }

    cout << "With Bubblesort" << endl;
    //outer loop to check the list
    for (int i = 0; i < max; i++)
    {
        //inner loop searches element per element in the list
        int nrLeft = max - i; // Keeps track of nr of elements searched so far
        for (int j= 0; j<nrLeft; j++)
        {
            if (myList[j] > myList[j+1]) //Compares elements
            {
                //Swap places
                int temp = myList[j];
                myList[j] = myList[j+1];
                myList[j+1] = temp;
            }
        }
    }
    // Prints entire list
    for(int i = 0; i < 5; i++)
    {
        cout << myList[i] << endl;
    }
    cin.get();
    return 0;
}
