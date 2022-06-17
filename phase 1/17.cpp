#include<iostream>
#include<string.h>
using namespace std;

class Prime
{
	private:
		int m,n,i,flag=0;
		
	public:
		
		void SetData()
		{
			cout << "Enter Any number : ";
			cin >> n;
		}
		
		void Cheak_prime_num()
		{
			m = n / 2;
			
			for(i=2;i<=m;i++)
			{
				if(n % i == 0)
				{
					cout << "Number is not a prime..";
					flag = 1;
					break;
				}
			}
			
			if(flag == 0)
			{
				cout << endl << endl << "Number is prime.." << endl;
			}
		}
};

int main()
{
	Prime d1;
	
	d1.SetData();
	
	d1.Cheak_prime_num();
	
	return 0;
}


