#include<iostream>
#include<string.h>
using namespace std;

class Rev
{
	protected:
		int n[3],p,rev[3] = {0,0,0},i;
		
	public:
	
		void SetData()
		{
			cout << "Enter 3 Number : ";
			
			for(i=0; i<3; i++)
			{
				cin >> n[i];
			}	
		}	
		
		void reve()
		{
			for(i=0;i<3;i++)
			{
				while(n[i] != 0)
				{
					p = n[i] % 10;
					rev[i] = (rev[i]*10) + p;
					n[i] = n[i] / 10;
				}
			}
			
			cout << endl << "Reverce : ";
			for(i=2; i>=0; i--)
				cout << rev[i] << " " << endl;
		}
};

int main()
{
	Rev r1;
	
	r1.SetData();
	
	r1.reve();
	
	return 0;
}


