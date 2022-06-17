#include<iostream>
#include<string.h>
using namespace std;

class Armstrong
{
	public:
		int i,num,temp,sum,p;
		
		void SetData()
		{
			cout << "Enter The number : ";
			cin >> num;
			
			temp = num;
		}
		
		void arm_strong()
		{
			while(num != 0)
			{
				p = num % 10;
				
				sum = sum + (p*p*p);
				
				num /= 10;
			}
			
			if(temp == sum)
			{
				cout << endl << endl << "Armstrong number.." << endl;
			}
			else
			{
				cout << endl << endl << "Not a Armstrong num.." << endl;
			}
		}
};

int main()
{
	Armstrong a1;
	
	a1.SetData();
	
	a1.arm_strong();
	
	return 0;
}


