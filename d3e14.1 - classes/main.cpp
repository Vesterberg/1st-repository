#include <iostream>

using namespace std;

class Dog
{
public:
    char* name;
    int age;
    char* race;
};

int main()
{
    cout << "Hello world!" << endl;
    Dog myDog; // uses the class to create a fictional dog
    myDog.name = "Fido";
    myDog.age = 3;
    myDog.race = "tax";
    cout << "My dogs name is " << myDog.name << ", it is a " << myDog.race <<" and "<< myDog.age<< " years old"<< endl;
    return 0;
}
