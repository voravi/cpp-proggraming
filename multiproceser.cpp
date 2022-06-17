#include<iostream>
#include<string.h>
using namespace std;

class Massage
{
	protected:
			char str[100];	
};

class Assign : public Massage
{
	public:
		Assign()
		{
			cout << endl << endl << strcpy(str,"I am ravi");
		}
		Assign(char name[])
		{
			cout << endl << endl << name << endl;
		}
};

int main()
{
	char name[100];
	
	cout << "Enter name : ";
	gets(name);
	
	Assign o1;
	Assign o2(name); 
	
	return 0;
}
