#include<iostream>
#include<string.h>
using namespace std;

class Max
{
	private:
		int n1,n2,n3,n4;
		
	public:
		
		void SetData()
		{
			cout << "Enter Four Number : " << endl;
			cin >> n1 >> n2 >> n3 >> n4;
		}
		
		void find_max()
		{
			(n1 > n2)	?(n1 > n3)	?(n1 > n4)	? cout << endl << "num1 is max"
												: cout << endl << "num4 is max"
												
									:(n3 > n4)	? cout << endl << "num3 is max"
												: cout << endl << "num4 is max"
												
						:(n2 > n3)	?(n2 > n4)	? cout << endl << "num2 is max"
												: cout << endl << "num4 is max"
												
									:(n3 > n4)	? cout << endl << "num3 is max"
												: cout << endl << "num4 is max";
		}
};

int main()
{
	Max m1;
	
	m1.SetData();
	
	m1.find_max();
	
	return 0;
}


