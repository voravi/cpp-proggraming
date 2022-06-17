#include<iostream>
#include<string.h>
using namespace std;

int cal(int n,int a,int b)
{
	char str[100];
	char p;
	int c;
//	char a = '+', b = '-', c = '*', d = '/', e = '%';

	if(n == 1)
	{
		strcpy(str,"Add");
		p = '+';
		c = a + b;
	}
	else if(n == 2)
	{
		strcpy(str,"Sub");
		p = '-';
		c = a-b;
	}
	else if(n == 3)
	{
		strcpy(str,"Mul");
		p = '*';
		c = a * b;
	}
	else if(n == 4)
	{
		strcpy(str,"div");
		p = '/';
		c = a/b;
	}
	else
	{
		strcpy(str,"Mod");
		p = '%';
		c = a % b;
	}
	
	cout << endl << "- " << str <<" - - - - -" << endl 
		             << "|               |" << endl 
					 << "|               |" << endl 
					 << "|   " << a << p << b << " = "<< c << "     |"<< endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "- - - - - - - - -";
	
}

int main()
{
 	int a,b;
	int ch;
	int choice;
	
	do
	{
		system("CLS");
	
    	cout << "Enter Two numbers :" << endl;;
    	cin >> a >> b;
	
	    cout << endl << "Press 1 for Addition " << endl;
    	cout << "Press 2 for Subtraction " << endl;
		cout << "Press 3 for Multification " << endl;
		cout << "Press 4 for Division " << endl;
		cout << "Press 5 for Modulus " << endl << endl;
	
		cout << "Enter Your choice :";
		cin >> ch;
	
		switch(ch)
		{
			case 1: cal(1,a,b);
				break;
			
			case 2: cal(2,a,b);
				break;
				
			case 3: cal(3,a,b);
				break;
				
			case 4: cal(4,a,b);
				break;
			
			case 5: cal(5,a,b);
				break;
				
			default: cout << "Invalid choice..!";
		}
	
		cout << endl << endl << "Press 1 for reapeat" << endl << "Press 0 for exit" << endl << endl;
		cin >> choice;
		
	}
	while(choice != 0);
	
	return 0;
}

/*
	switch(n)
	{		case 1: cout << endl << "- -Sum- - - - - -" << endl 
		             << "|               |" << endl 
					 << "|               |" << endl 
					 << "|   " << a << " + " << b << " = "<< a+b << "   |"<< endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "- - - - - - - - -";
					 
					 break;
					 
		case 2: cout << endl << "- -Sub- - - - - -" << endl 
		             << "|               |" << endl 
					 << "|               |" << endl 
					 << "|   " << a << " - " << b << " = "<< a-b << "   |"<< endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "- - - - - - - - -";
					 
					  break;
					 
		case 3: cout << endl << "- -Mul- - - - - -" << endl 
		             << "|               |" << endl 
					 << "|               |" << endl 
					 << "|   " << a << " * " << b << " = "<< a*b << "   |"<< endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "- - - - - - - - -";
					 
					  break;
					 
		case 4: cout << endl << "- -Div- - - - - -" << endl 
		             << "|               |" << endl 
					 << "|               |" << endl 
					 << "|   " << a << " / " << b << " = "<< a/b << "   |"<< endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "- - - - - - - - -";
					 
					  break;
					 
		case 5: cout << endl << "- -Mod- - - - - -" << endl 
		             << "|               |" << endl 
					 << "|               |" << endl 
					 << "|   " << a << " % " << b << " = "<< a%b << "   |"<< endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "|               |" << endl 
					 << "- - - - - - - - -";
					  break;
					  
	}
	
*/
