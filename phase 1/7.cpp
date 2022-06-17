#include<iostream>
#include<string.h>
using namespace std;

class Avg
{
	private:
		int n1,n2,n3;
	
	public:
		
		void SetData()
		{
			cout << "Enter 3 marks out of 100 : ";
			cin >> this->n1 >> this->n2 >> this->n3;	
		}	
		
		void GetData()
		{
			float avg;
			
			avg = (n1+n2+n3) / 3;
			cout << endl << "Avarage of marks : " << avg << " %"<< endl << endl;
		}
};

int main()
{
	Avg priyank;
	
	priyank.SetData();
	
	priyank.GetData();
	
	return 0;
}


