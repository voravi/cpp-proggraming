#include<iostream>
#include<string.h>
using namespace std;

class Table
{
	private:
		int i,n;
		
	public:
		void SetData()
		{
			cout << "Enter Table Num (1 to 10) : ";
			cin >> n;
		}
		
		void GetData()
		{
			cout << endl << endl << "Table of " << n << " is :" << endl << endl;
			
			for(i=1;i<=10;i++)
			{
				cout << n << " * " << i << " = " << n*i << endl;
			}
		}
};

int main()
{
	Table t1;
	
	t1.SetData();
	
	t1.GetData();
	
	return 0;
}


