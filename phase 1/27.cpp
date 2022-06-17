#include<iostream>
#include<string.h>
using namespace std;

class Digit
{
	private:
		int n,temp,p,sum=0;
		
	public:
		
		void SetData()
		{
			cout << "Enter any Number : ";
			cin >> n;
			
			temp = n;
		}
		void GetData()
		{
			while(n != 0)
			{
				p = n % 10;
				sum = sum + p;
				n = n / 10;
			}
			
			cout << endl << endl << "Sum of Digit is  : " << sum << endl;
		}
			
};

int main()
{
	Digit d1;
	
	d1.SetData();
	
	d1.GetData();
	
	return 0;
}


