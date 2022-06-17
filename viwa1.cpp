#include<string.h>
#include<iostream>
using namespace std;

class Fact
{
	public:
	//	int n;
		
		int f(int n)
		{
			if(n == 1)
			{
				return 1;
			}
			else
			{
				return n * f(n-1);
			}
		}
};

int main()
{
	int n;
	
	cout << "Enter Number For factorial : ";
	cin >> n;
	
	Fact f1;
	
	cout << endl << endl << "Factorial is : " << f1.f(n);
	
	return 0;
}
