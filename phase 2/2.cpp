#include<iostream>
#include<string.h>
using namespace std;

class Num
{
	private:
		int n,i,sum=0,count=0;
		float avg;
		
	public:	
		Num()
		{
			cout << "Enter limit (1 to n): ";
			cin >> this->n;
		}
		
		void even_ele()
		{
			for(i=1;i<=n;i++)
			{
				if(i%2==0)
				{
					sum = sum + i;
					count++;
				}
			}
			
			this->avg = sum / count;
			
			cout << endl << endl << "Avarage : " << this->avg;
		}
};

int main()
{
	Num s1;
	
	s1.even_ele();
	
	return 0;
}


