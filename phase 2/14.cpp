#include<iostream>
#include<string.h>
using namespace std;

class Tax
{
	public:
		int price;
		float tax,cal,total;
		
		Tax()
		{
			cout << endl << "Enter Price : ";
			cin >> this->price;
			
			cout << "Enter Tax rate(%) : ";
			cin >> this->tax;
		}
		
		void covt()
		{
			cal = price * (tax * 0.01);
			total = price + cal;
			
			cout << endl << endl << "GST : " << total;
		}
};

int main()
{
	Tax t1;
	
	t1.covt();
	
	return 0;
}

