#include<iostream>
#include<string.h>
using namespace std;

class Peli
{
	private:
		int n,temp,p,rev;
		
	public:
		
		void SetData()
		{
			cout << "Enter any Number : ";
			cin >> n;
			
			temp = n;
		}
		
		void pelidomnal()
		{
			while(n != 0)
			{
				p = n % 10;
				rev = (rev * 10) + p;
				n = n / 10;
			}
			
			if(temp == rev)
			{
				cout << endl << endl << "Pelidomnal number.." << endl;
			}
			else
			{
				cout << endl << endl << "Not a pelidomnal num.." << endl;
			}
		}
};

int main()
{
	Peli r1;
	
	r1.SetData();
	
	r1.pelidomnal();
	
	return 0;
}


