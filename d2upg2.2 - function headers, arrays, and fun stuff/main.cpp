#include <iostream>
using namespace std;

//Function calculating the average value of the elements in the array
float medel(int v[], int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + v[i];
    }
    return (float)sum/n;
}


int main()
{
    //Creates array:
    int n = 10;
    int v[n];

    // Assigns array's elements
    v[0] = 1;
    v[1] = 3;
    v[2] = 5;
    v[3] = 7;
    v[4] = 10;
    v[5] = 1;
    v[6] = 3;
    v[7] = 5;
    v[8] = 7;
    v[9] = 10;

    //Calls average element value calc function
    float average = medel(v,n);

    cout << "Average nr is: "<< average; //prints answer
    cin.get();
    return 0;
}
