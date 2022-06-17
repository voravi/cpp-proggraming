#include<iostream>
#include<string.h>
using namespace std;

class Tringle
{
	public:
		int base = 56;
		int hight = 21,ans=0;
		int sum=0, p=0;
		
		void Area_tringle()
		{
			ans = (this->base * this->hight) / 2;
			
			cout << "Area of tringle : " << this->ans;
			
			while(ans != 0)
			{
				this->p = this->ans % 10;
				this->sum = this->sum + p;
				this->ans = this->ans / 10;
			}
			
			cout << endl << endl << "Sum of Digits : " << this->sum;
		}
};

int main()
{
	Tringle t;
	
	t.Area_tringle();
	
	
	return 0;
}


