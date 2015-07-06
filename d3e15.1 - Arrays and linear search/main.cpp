#include <iostream>

using namespace std;



int main()
{
    cout << "Hello world! Look for element 33" << endl;
    cout << "Look for index place number of element 33" << endl;

    int myList[] = {3, 15, 7, 1, 42, 97, 52, 33, 82, 19};
    int key = 33; // Search term

    for (int i = 0; i < 10; i++) // Prompts going through entire list
    {
        if (myList[i] == key) // rules to confirm search hit - how we know that the number we are looking for is found
        {
            cout << "Element exists on index " << i;
            break; // Breaks search loop, we're done here
        }
    }

    return 0;
}
