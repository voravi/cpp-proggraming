#include<iostream>
#include<string.h>
using namespace std;

class GST
{
	private:
		int price,cost;
		
	public:
		
		GST()
		{
			cout << "Enter price : ";
			cin >> this->price;
			cout << "Enter cost : ";
			cin >> this->cost;
		}
		
		void Cal()
		{
			cout << endl << endl << "GST : " << (((price - cost) * 100) / cost);
		}
		
};

int main()
{
	GST g1;
	
	g1.Cal();

	return 0;
}

