#include<iostream>
#include<string.h>
using namespace std;

class Convt
{
	private:
		int year=0, month=0, day;
		int red;
		
	public:
		
		void SetData()
		{
			cout << "Enter  Days : ";
			cin >> day;
			red = day;
			
			while(red >= 365)
			{
				year++;
				red -= 365;
				day -= 365;
			}
			
			while(red >= 30)
			{
				month++;
				red -= 30;
			}
			
		}
		
		void GetData()
		{
			cout << endl << "Year : " << year << endl
			<< "Month : " << month << endl
			<< "Day : " << red << endl;
		}
};

int main()
{
	Convt p1;
	
	p1.SetData();
	
	p1.GetData();
	
	return 0;
}


