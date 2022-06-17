#include <iostream>
#include<string.h>
using namespace std;

class Mother
{
	public:

		void display()
		{
			cout << "hello i am mother"<< endl;
		};	
};

class Daughter : public Mother
{
	public:

		void display()
		{
			cout << "hello i am daugther"<< endl;
		};	
};

int main()
{	
	Mother mo;
	Daughter dau;
	
	
	mo.display();
	dau.display();

	return 0;
}
