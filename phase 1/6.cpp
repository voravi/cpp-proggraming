#include <stdio.h>
#include <stdlib.h>
//#include <time.h>
#include <iostream>
using namespace std;
int main()
{
	int i;
	if(rand() <= 999999)
	{
		do
		{
			int p;
			p = rand() + rand();
			cout << "random : " << p / 10000 << rand();
			
			cout << endl << endl << "Press 0 for Exit..." << endl << endl;
			cin >> i;
		}
		while(i != 0);
	}
 	
  return 0;
}
