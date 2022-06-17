
#include<iostream>
using namespace std;

class Sum
{
	public:
		
		int feet;
		int inch;	
		
	void SetData()
	{
		cout << "Enter inches : ";
		cin >> inch; 
		
		while(inch >= 12)
		{
			feet++;
			inch -= 12;
		}
	}
	
	void GetData()
	{
		cout << endl << "Feets : " << feet << endl 
		<< "Inches : " << inch;
	}
};

int main()
{
	Sum o1;
	
	o1.SetData();
	
	o1.GetData();
	
	return 0;
}

