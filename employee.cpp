#include<iostream>
using namespace std;

class Emp
{
	private:
		int emp_id;
		char emp_name[100];
		int emp_age;
		int emp_exp;
		int emp_salary;
		char emp_city[100];
		char emp_company_name[100];
		
	public:
		
		// setter
		void SetData()
		{
			cout << "Emp_id : "; cin >> this->emp_id;
			cout << "Emp_name : "; fflush(stdin); gets(this->emp_name);
			cout << "Emp_age : "; cin >> this->emp_age;
			cout << "emp_exp : "; cin >> this->emp_exp;
			cout << "emp_salary : "; cin >> this->emp_salary;
			cout << "emp_city : "; fflush(stdin); gets(this->emp_city);
			cout << "emp_company_name : "; fflush(stdin); gets(this->emp_company_name);
		}
		
		// getter	
		void GetData()
		{
			cout << "Employee id : " << this->emp_id << endl
			<< "Employee name : " << this->emp_name << endl
			<< "Employee age : " << this->emp_age << endl
			<< "Employee expirence : " << this->emp_exp << endl
			<< "Employee salary : " << this->emp_salary << endl
			<< "Employee city : " << this->emp_city << endl
			<< "Employee company name : " << this->emp_company_name << endl;
		}
};

int main()
{
	
	Emp e[100];
	int i,n;
	
	cout << "How many employee : ";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		cout << endl << endl << "Enter " << i+1 << " employee information" << endl << endl;
		e[i].SetData();
		system("CLS");
	}
	
	for(i=0;i<n;i++)
	{
		cout << endl << i+1 << " Employee details" << endl << endl;
		e[i].GetData();
	}
	
	return 0;
}
