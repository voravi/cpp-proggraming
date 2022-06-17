#include<iostream>
#include<string.h>
using namespace std;

class Cheak
{
	protected:
			int n;
		
	public:
		
		void SetData()
		{
			cout << "Enter Number : ";
			cin >> n;
		}
		
		void Cheak_num()
		{
			if (n % 2 == 0) 
         	{
         		cout << endl << endl << "You Entered even Number...";
			}
			else
			{
				cout << endl << endl << "Your Entered odd Number...";
			}
         		   
		}
};

int main()
{
	Cheak e1;
	
	e1.SetData();
	
	e1.Cheak_num();
	
	return 0;
}
