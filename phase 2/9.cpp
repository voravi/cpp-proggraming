#include<iostream>
#include<string.h>
using namespace std;

class BMI
{
	private:
		int hight,wight;
		
	public:
		
		BMI()
		{
			cout << "Enter Hight : ";
			cin >> this->hight;
			cout << "Enter Wight : ";
			cin >> this->wight;
		}
		
		void Cal()
		{
			cout << endl << endl << "BMI : " << this->wight / this->hight / 2;
		}
		
};

int main()
{
	BMI p1;
	
	p1.Cal();

	return 0;
}

