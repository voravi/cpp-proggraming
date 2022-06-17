#include<iostream>
#include<string.h>
using namespace std;

class Solve
{
	public:
		float x;
		float a,b;
		
		void SetValue()
		{
			cout << "Enter X : ";
			cin >> this->x;
			this->a = 2 * (x - 3);
			this->b = (4 * x) - 1;
		}
//		2(x-3)=4x-1
		void Solutuin()
		{
			if(a == b)
			{
				cout << endl << endl << "Equation Solved...!";
			}
			else
			{
				cout << endl << endl << "Not solved...";
			}
		}
};

int main()
{
	Solve s1;
	
	s1.SetValue();
	
	s1.Solutuin();
	// Ans : -2.5
	return 0;
}


