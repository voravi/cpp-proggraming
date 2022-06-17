#include<iostream>
#include<string.h>
using namespace std;

class Digit
{
	private:
		int n,digit=0;
		
	public:
		void SetData()
		{
			cout << "Enter Any number : ";
			cin >> n;
		}
		
		void GetDigit()
		{
			while(n > 0)
			{
				digit++;
				n = n / 10;
			}
			
			cout << endl << endl << "Number of digit is : " << digit;
		}
};

int main()
{
	Digit d1;
	
	d1.SetData();
	
	d1.GetDigit();
	return 0;
}


