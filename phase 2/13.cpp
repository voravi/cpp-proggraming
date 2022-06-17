#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

// E = (P.r.(1+r)n) / ((1+r)n – 1) 
class EMI
{
	public:
		float p,r,t;
		float emi=0;
		
		EMI()
		{
			cout << endl << "Enter Principle : ";
			cin >> this->p;
			
			cout << "Enter Rate : ";
			cin >> this->r;
			
			cout << "Enter Time : ";
			cin >> this->t;
		}
		
		void covt()
		{
			r = r / (12 * 100);
			t = t * 12;
			
			emi = (p * r * pow(1+r,t)) / (pow(1+r,t) - 1);
			
			cout << endl << endl << "EMI : " << emi;
		}
};

int main()
{
	EMI e1;
	
	e1.covt();
	
	return 0;
}

