#include<iostream>
#include<string.h>
using namespace std;

class Find
{
	private:
		char n;
		
	public:
		
		void SetData()
		{
			cout << "Press Any key : ";
			cin >> n;
		}
		
		void finder()
		{
			if(this->n >= 'a' && this->n <= 'z')
			{
				cout << endl << endl << "You entered Lowercase charecter...";
			}
			else if(this->n >= 'A' && this->n <= 'Z')
			{
				cout << endl << endl << "You entered Uppercase charecter...";
			}
			else if(this->n >= '0' && this->n <= '9')
			{
				cout << endl << endl << "You entered Digit...";
			}
			else
			{
				cout << endl << endl << "Special character..." << endl;
			}
		}
};

int main()
{
	Find t1;
	
	t1.SetData();
	
	t1.finder();
	
	return 0;
}


