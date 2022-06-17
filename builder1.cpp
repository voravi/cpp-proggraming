#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Emp
{
	private:
		int emp_id;
		char emp_name[100];
		char emp_role[100];
		int emp_salary;
		int emp_exp;
		char emp_add[100];
		char emp_email[100];
		long int emp_contect;
		
	public:
		
		void SetData()
		{
			cout << "Emp_id : "; cin >> this->emp_id;
			cout << "Emp_name : "; fflush(stdin); gets(this->emp_name);
			cout << "Emp_role : "; fflush(stdin); gets(this->emp_role);
			cout << "Emp_salary : "; cin >> this->emp_salary;
			cout << "Emp_exp : "; cin >> this->emp_exp;
			cout << "Emp_add : "; fflush(stdin); gets(this->emp_add);
			cout << "Emp_mail : "; fflush(stdin); gets(this->emp_email);
			cout << "Emp_contect : "; cin >> this->emp_contect;
			
		}
		
		void GetData()
		{
			cout << " Id = " << this->emp_id << endl
			<< " Name : " << this->emp_name << endl
			<< " role : " << this->emp_role << endl
			<< " salary : " << this->emp_salary << endl
			<< " experience : " << this->emp_exp << endl
			<< " address : " << this->emp_add << endl
			<< " E-mail : " << this->emp_email << endl
			<< " contect : " << this->emp_contect << endl;
		}
	
};

int main()
{
	int i,n;
	Emp e[100];
	
	cout << "How many Employee : ";
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		cout << endl << "Enter employee " << i << " Detail :" << endl << endl;
		e[i].SetData();
		system("CLS");
	}
		
	for(i=1;i<=n;i++)
	{
		cout << endl << "Employee " << i << " detail :" << endl << endl;
		e[i].GetData();
	}
	
	return 0;
}
