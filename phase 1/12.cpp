#include<iostream>
#include<string.h>
using namespace std;

class Intrest
{
	private:
		int p,r,n;
		float all;
		
	public:	
	
		void SetData()
		{
			cout << "Enter Price : ";
			cin  >> p;
			cout << "Enter Intrest : ";
			cin >> r;
			cout << "Enter Time : ";
			cin >> n;
		}
		
		void GetData()
		{
			all = (p * r * n) / 100;
			
			cout << endl << endl << "Simple Intrest : " << all << endl;
		}
};

int main()
{
	Intrest s1;
	
	s1.SetData();
	
	s1.GetData();
	
	return 0;
}

