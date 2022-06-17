#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

class Count
{
	public:
		int count = 0;
		
	void Get_Data()
	{
		cout << "Enter Any arrow(up & down) : " << endl;
		
		while(1)
		{
			int ch = getch();
			
			if(ch == 72)
			{
				count++;
				cout << count << endl;
			}
			else if(ch == 80)
			{
				count--;
				cout << count << endl;
			}
		}
	}
	
	void cheak()
	{
		int c;
		
		cout << "Char : ";
		cin >> c;
		
		cout << endl << c << " -- > "<< (char)(c);
	}
};

int main()
{
	Count c1;
	
//	c1.cheak();
	c1.Get_Data();

	return 0;
}

