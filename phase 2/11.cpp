#include<iostream>
#include<string.h>
using namespace std;

class Covt
{
	private:
		int ch;
		float fer,cel;
		
	public:
		
		void fer_to_cel()
		{
			cout << endl << "Enter fahrenheit : ";
			cin >> this->fer;
			
			cout << endl << endl << "Celsius : " << (fer-32 ) * 5/9;
		}
		
		void cel_to_fer()
		{
			cout << endl << endl << "Enter celsius : ";
			cin >> this->cel;
			
			cout << endl << endl << "Fahrenheit : " << (cel * 9/5) + 32.00;
		}
		
		void SetData()
		{
			cout << endl << endl << "1. celsius to fahrenheit" << endl
			<< "2. fahrenheit to celsius" << endl
			<< "0. Exit"<< endl << endl;
			
			cout << "Enter Your choice : ";
			cin >> this->ch;
		}
		
		void  swi_ch()
		{
			Covt::SetData();
			
			switch(this->ch)
			{
				case 1: Covt::cel_to_fer();
					break;
				
				case 2: Covt::fer_to_cel();
					break;

			}
		}
	
	
};

int main()
{
	Covt c1;
	
	c1.swi_ch();
	
	return 0;
}

