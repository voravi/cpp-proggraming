#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class Bank
{
	public:
		
		int ac_num;
		char ac_name[100];
		char ac_type[100];
		char ac_branch[100];
		long int ac_balance;
		
		void Set_Data()
		{
			cout << "Account Number : "; cin >> this->ac_num;
			cout << "Account user Name : "; fflush(stdin); cin >> this->ac_name;
			cout << "Account Type(C for Current, S for Saving) : "; fflush(stdin); cin >> this->ac_type;
			cout << "Account Branch : "; fflush(stdin); cin >> this->ac_branch;
			cout << "Account Balance : "; cin >> this->ac_balance;
		}
		
		void Get_Data()
		{
			cout << endl << "Account num : " << this->ac_name << endl << endl
			<< "Account user Name : " << this->ac_name << endl << endl
			<< "Account Type : " << this->ac_type << endl << endl
			<< "Account branch : " << this->ac_branch << endl << endl
			<< "Account Balance : " << this->ac_balance << endl << endl;
		}
};

int main()
{
	int n,i;
	
	cout << "How many Accounts : ";
	cin >> n;
	
	Bank u[n];
	
	for(i=0;i<n;i++)
	{
		cout << endl << "Enter User " << i+1 << " details : " << endl << endl; 
		u[i].Set_Data();
		system("CLS");
	}
	

	int ch;
	
start :
	
	cout << endl << "Press 0 for Exit";
	cout << endl << endl << "Enter Account Number For search : ";
	cin >> ch;
	
	if(ch == 0)
	{
		exit(0);
	}
	
	for(i=0;i<n;i++)
	{
		if(u[i].ac_num == ch)
		{
			u[i].Get_Data();
			
			cout << endl << endl << "Press Any key for Main screen...";
			system("pause>null");
			goto start;
		}
		else
		{
			cout << endl << endl << "No Account Found...";
			system("pause>null");
			
			goto start;
		}
	}
	
	return 0;
}
