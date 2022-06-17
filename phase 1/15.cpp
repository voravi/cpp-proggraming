#include<iostream>
#include<string.h>
using namespace std;

class Alfa_cheak
{
	protected:
		char n;
		
	public:
		
		void SetData()
		{
			cout << "Enter charector : ";
			cin >> n;
		}
		
		void Cheak_()
		{
			if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' ||
         		n == 'E' || n == 'I' || n == 'O' || n == 'U') 
         	{
         		cout << endl << endl << "You Entered vowel...";
			}
			else
			{
				cout << endl << endl << "Your Entered constant...";
			}
         		   
		}
};

int main()
{
	Alfa_cheak e1;
	
	e1.SetData();
	
	e1.Cheak_();
	
	return 0;
}


