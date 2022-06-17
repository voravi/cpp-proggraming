#include<iostream>
#include<string.h>
using namespace std;

class Peli
{
	private:
		char str[100],str2[100];
		
	public:
		
		void SetData()
		{
			cout << "Enter any String : ";
			fflush(stdin);
			gets(str);
			
			strcpy(str2,str);
			strrev(str2);
		}
		
		void pelidomnal()
		{
			if(strcmp(str2,str) == 0)
			{
				cout << endl << endl << "String is Pelidomanal..." << endl;
			}
			else
			{
				cout << endl << endl << "string isnot a pelidomnal..." << endl;
			}
		}
};

int main()
{
	Peli p1;
	
	p1.SetData();
	
	p1.pelidomnal();
	
	return 0;
}


