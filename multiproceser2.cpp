#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public:
		void car()
		{
			cout << endl << "Audi";
		}
};

class B : public A
{
	public:
		void car()
		{
			A o1;
			o1.car();
			cout << endl << endl << "Dustor";
		}
};

int main()
{
	B o2;
	o2.car();
	
	return 0;
}
