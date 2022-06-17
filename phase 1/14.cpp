#include<iostream>
//#include<string.h>
using namespace std;

class Leap
{
	protected:
		int year;
	
	public:
		void SetData()
		{
			cout << "Enter Any Year : ";
			cin >> year; 
		}
		
		void GetData()
		{
			if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			{ 
				cout << endl << endl << "Leap Year...!";
			}
			else
			{
				cout << endl << endl << "Not a Leap Year...!";
			}
		}
};

int main()
{
	Leap y1;
	
	y1.SetData();
	
	y1.GetData();
	
	return 0;
}


