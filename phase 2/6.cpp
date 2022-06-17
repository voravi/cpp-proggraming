#include<iostream>
#include<string.h>
using namespace std;

class Cal
{
	public:
		int n1,n2,ch;
		
		Cal()
		{
			cout << "Enter First Value : ";
			cin >> this->n1;
			
			cout << "Enter Second Value : ";
			cin >> this->n2;
		}
		
		void calculetor()
		{
			cout << endl << endl << "1. Additon" << endl
			<< "2. Subtraction" << endl
			<< "3. Multification" << endl
			<< "4. Division" << endl
			<< "5. Modulus" << endl 
			<< "0. Exit"<< endl << endl;
			
			cout << "Enter Your choice : ";
			cin >> this->ch;
		}
		
		void swi_case()
		{
			switch(this->ch)
			{
				case 1: cout << endl << "Addition is : " << n1 + n2;
					break;
					
				case 2: cout << endl << "Subtraction is : " << n1 - n2;
					break;
					
				case 3: cout << endl << "Multification is : " << n1 * n2;
					break;
					
				case 4: cout << endl << "Division is : " << n1 / n2;
					break;
					
				case 5: cout << endl << "Addition is : " << n1 % n2;
					break;
					
			}
		}
		
};

int main()
{
	Cal u1;
	
	do
	{
		u1.calculetor();
		
		u1.swi_case();
		
	}
	while(u1.ch != 0);
	
	return 0;
}


