#include<string.h>
#include<iostream>
using namespace std;

class India
{
	public:
		void Wearing()
		{
			cout << endl << "Sadi and paghdi";
		}	
};

class Pak : public India
{
	public:
		void Wearing()
		{
			cout << endl << "pathani and kurta";
		}
};

int main()
{
	Pak ravi;
	
	ravi.Wearing();
	
	return 0;
}
