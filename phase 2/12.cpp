#include<iostream>
#include<string.h>
using namespace std;

class Covt
{
	private:
		int sec,n=0;
		int min=0,hour=0;
		
	public:
		
		Covt()
		{
			cout << endl << "Enter Seconds : ";
			cin >> this->sec;
		}
		
		void change()
		{
			while(sec >= 60)
			{
				min++;
				n++;
				if(n >= 60)
				{
					hour++;
					n -= 60;
					min -= 60;
				}
				
				sec -= 60;
			}
			
			cout << endl << endl << "Hours : " << this->hour << endl
			<< "Minutes : " << this->min << endl
			<< "Second : " << this->sec;
		}
	
};

int main()
{
	Covt c1;
	
	c1.change();
	
	return 0;
}

