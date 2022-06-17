#include<iostream>
#include<string.h>
using namespace std;

class Num
{
	private:
		int base;
		int power;
		int i=1,num=1;
		
	public:
		
		void SetData()
		{
			cout << "Enter Base : ";
			cin >> base;
			
			cout << "Enter Power : ";
			cin >> power;
			
			while(i <= power)
			{
				num = num * base; // 1 * 2 >> 4 >> 8...
				i++;
			}
		}
		
		void GetData()
		{
			cout << endl << "Power of number : " << num << endl;
		}
		
};

int main()
{
	Num o1;
	
	o1.SetData();
	
	o1.GetData();
	
	return 0;
}


