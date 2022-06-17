#include<iostream>
#include<string.h>
using namespace std;

class Series
{
	private:
		int n1=0,n2=1,n3,num,i;
		
	public:
		
		void SetData()
		{
			cout << "Enter Limit : ";
			cin >> num;
		}
		
		void febo_seri()
		{
			cout << "Febonacci Series : " << n1 << " " << n2 << " ";
			
			for(i=2; i<=num; i++)
			{
				n3 = n1 + n2;
				cout << n3 << " ";
				n1 = n2;
				n2 = n3;
			}
		}
};

int main()
{
	Series f1;
	
	f1.SetData();
	
	f1.febo_seri();
	return 0;
}


