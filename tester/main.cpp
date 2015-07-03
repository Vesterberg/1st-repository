#include <iostream>
float medel(int [], int ) ; // no variable names needed -- just the types

int main ()
{
    const int SIZE = 10;
    int num [SIZE];

    cout << "Welcome to the program. Enter 10 positive numbers: ";
    for (int i=0; i<SIZE; i++)
    cin >> num [i];

    average = medel (num, SIZE);

    cout << "the average is: " << average;
    return 0;// 'cause main() returns an int

    float medel(int v[], int n)
    {
        float sum=0;// initialize sum
        for (int j=0;j<n;j++) // loop through the values
        sum +=v[j]; // add them up
        return sum/n; // return the average
    }
}
