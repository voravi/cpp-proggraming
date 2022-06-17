#include<iostream>
#include<string.h>
#define PI 3.14
using namespace std;

class Circle
{
	public:
		int r,ch;
		
		Circle()
		{
			cout << "Enter Redius : ";
			cin >> this->r;
		}
		
		void area()
		{
			cout << endl << endl << "Area of circle is : " << PI * r * r;
		}
		
		void perameter()
		{
			cout << endl << endl << "Perameter of circle is : " << PI * 2 * r;
		}
		
		void Diameter()
		{
			cout << endl << endl << "Diameter of circle is : " << 2 * r;
		}
		
		void choice()
		{
			cout << endl << endl << "1. Area of circle" << endl
			<< "2. Perameter of circle" << endl
			<< "3. Diameter of circle" << endl
			<< "0. Exit"<< endl << endl;
			
			cout << "Enter Your choice : ";
			cin >> this->ch;
			
			Circle::swi_ch();
		}
		
		void swi_ch()
		{
			switch(this->ch)
			{
				case 1: Circle::area();
					break;
					
				case 2: Circle::perameter();
					break;
					
				case 3: Circle::Diameter();
					break;
			}
		}
};

int main()
{
	Circle c1;
	
	do
	{
		c1.choice();
	}
	while(c1.ch != 0);
	
	return 0;
}


