#include<iostream>
#include<string.h>
using namespace std;

class Fact
{
	public:
		int n,i,fct=1;
		
		void SetData()
		{
			cout << "Enter Any number : ";
			cin >> n;
		}
		
		void fact()
		{
			for(i=n;i>=1;i--)
			{
				fct = fct * i;
			}
			
			cout << endl << endl << "Factorial is : " << fct;
		}
};

int main()
{
	Fact q1;
	
	q1.SetData();
	
	q1.fact();
	
	return 0;
}


