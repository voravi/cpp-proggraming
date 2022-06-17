#include<string.h>
#include<iostream>
using namespace std;
#include<stdlib.h>

class Emp
{
	private:
		int emp_id;
		char emp_name[100];
		int emp_age;
		int emp_exp;
		char emp_role[100];
		char emp_city[100];
		static char emp_company_name[100];
		
	public:
		
		// setter
		void SetData()
		{
			cout << "Emp id : "; cin >> emp_id;
			cout << "Emp Name : "; fflush(stdin); gets(emp_name);
			cout << "Emp age : "; cin >> emp_age;
			cout << "Emp exp : "; cin >> emp_exp;
			cout << "Emp role : "; fflush(stdin); gets(emp_role);
			cout << "Emp city : "; fflush(stdin); gets(emp_city);
			
		}
		
		// getter
		void GetData()
		{
			cout << "Employee id : " << emp_id << endl
			<< "Employee name : " << emp_name << endl
			<< "Employee age : " << emp_age << endl
			<< "Employee exp : " << emp_exp << endl
			<< "Employee role : " << emp_role << endl
			<< "Employee city : " << emp_city << endl
			<< "Employee Company : " << emp_company_name << endl;
		}
};

char Emp::emp_company_name[100] = "RNW Softtech ";

int main()
{
	Emp e[100];
	int i,n;
	
	cout << "HOw many Employee : ";
	cin >> n;
	
	
	for(i=1;i<=n;i++)
	{
		cout << endl << "Enter employee " << i << " details :" << endl << endl;
		e[i].SetData();
		system("CLS");
	}
	
	for(i=1;i<=n;i++)
	{
		cout << endl << endl << "Enployee " << i << " detail :" << endl << endl;
		e[i].GetData();
	}

	return 0;
}

