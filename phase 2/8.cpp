#include<iostream>
#include<string.h>
using namespace std;

class Covt
{
	private:
		
		int n,binary,p[100],i,base=1;
		
	public:
		
		Covt()
		{
			cout << "Enter desimal : ";
			cin >> this->n;
		}
		
		void Process()
		{
			for(i=0;n!=0;i++)
			{
				p[i] = n % 2;
				n = n / 2;
			}
		}
		
		void biry()
		{
			Covt::Process();
			cout << endl << endl << "Binery : ";
			
			for(i=i-1;i>=0;i--)
			{
				cout << this->p[i];
			}
		}
};

int main()
{
	
	Covt c1;
	
	c1.biry();
	
	return 0;
}


