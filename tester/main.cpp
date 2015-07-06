#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:

	void Print()
	{
		cout << "Mannen heter " << name << " och mannen är " << age << " år gammal" << endl;
	}

	string get_name() { return name; }
	void set_name(string set){ name = set; }
	int get_age(){ return age; }
	void set_age(int set){ age = set; }

};

int main()
{
	Person myPerson;
	myPerson.set_name("Emil");
	myPerson.set_age(25);
	myPerson.Print();
	cin.get();
	return 0;
}
