#include<string.h>
#include<iostream>
using namespace std;

class A
{
	public:
		int n1,n2;
		
		void Set_data()
		{
			n1 = 3;
			n2 = 0;
		}
		
			void exp()
			{
				try
				{
					if(n2 != 0)
					{
						cout << "Division is : " << n1 /n2;
					}
					else
						throw 13;
				}
				catch(...)
				{
					cout << "Error..";
				}
			}
		
};

int main()
{
	A e1;
	
	e1.Set_data();
	
	e1.exp();
	
	return 0;
}
