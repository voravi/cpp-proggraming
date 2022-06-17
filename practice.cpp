#include<iostream>
#include<string.h>
using namespace std;

class Dare_n_win
{
	public:
		string s , s1 ,s3;  
    	int  i,j,k,count=0,n;
    	
 		player1()
		{
			cout << "PLAYER 1 : " << endl << endl;
		
			cout << "Write Dare For Player 2 : " ;
			getline (cin, s);
		}
		
		player2()
		{
			cout << endl << endl << "PLAYER 2 : " << endl << endl;
		
			cout << "Write Dare For Player 1 : " ;
			getline (cin, s1);
		}
 
		setdata()
		{
			player1();
			
			player2();
			
			s3 == s;
			s == s1;
			s1 == s3;
			
			cout << endl << endl << "Player 1 dare : " << s;
			cout << endl << endl << "Player 2 dare : " << s1;
			
		}
	
};

int main()
{
	
	Dare_n_win t;
	t.setdata();
	return 0;
}
