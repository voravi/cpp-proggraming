#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Emp
{
	public:
		int emp_id;
		char emp_name[100];
		int emp_age;
		int epm_exp;
		int emp_salary;
		char emp_role[100];
		char emp_city[100];
		char emp_company_name[100];	
};

int main()
{
	Emp e1,e2,e3,e4,e5,e6,e7;
	
	// first employee detail :
	
	cout << "Enter First employee detail :" << endl << endl;
	
	cout << "Employee id : ";
	cin >> e1.emp_id;
	
	cout << "Employee name : ";
	fflush(stdin);
	gets(e1.emp_name);
	
	cout << "Employee age : ";
	cin >> e1.emp_age;
	
	cout << "Employee experience : ";
	cin >> e1.epm_exp;
	
	cout << "Employee salary : ";
	fflush(stdin);
	cin >> e1.emp_salary;
	
	cout << "Employee role : ";
	fflush(stdin);
	gets(e1.emp_role);
	
	cout << "Employee city : ";
	fflush(stdin);
	gets(e1.emp_city);
	
	cout << "Employee company name : ";
	fflush(stdin);
	gets(e1.emp_company_name);
	
	
	// Second employee detail :
	
	system("CLS");
	
	cout << "Enter Second employee detail :" << endl << endl;
	
	cout << "Employee id : ";
	cin >> e2.emp_id;
	
	cout << "Employee name : ";
	fflush(stdin);
	gets(e2.emp_name);
	
	cout << "Employee age : ";
	cin >> e2.emp_age;
	
	cout << "Employee experience : ";
	cin >> e2.epm_exp;
	
	cout << "Employee salary : ";
	fflush(stdin);
	cin >> e2.emp_salary;
	
	cout << "Employee role : ";
	fflush(stdin);
	gets(e2.emp_role);
	
	cout << "Employee city : ";
	fflush(stdin);
	gets(e2.emp_city);
	
	cout << "Employee company name : ";
	fflush(stdin);
	gets(e2.emp_company_name);
	
	
	// third employee detail :
	
	system("CLS");
	
	cout << "Enter third employee detail :" << endl << endl;
	
	cout << "Employee id : ";
	cin >> e3.emp_id;
	
	cout << "Employee name : ";
	fflush(stdin);
	gets(e3.emp_name);
	
	cout << "Employee age : ";
	cin >> e3.emp_age;
	
	cout << "Employee experience : ";
	cin >> e3.epm_exp;
	
	cout << "Employee salary : ";
	fflush(stdin);
	cin >> e3.emp_salary;
	
	cout << "Employee role : ";
	fflush(stdin);
	gets(e3.emp_role);
	
	cout << "Employee city : ";
	fflush(stdin);
	gets(e3.emp_city);
	
	cout << "Employee company name : ";
	fflush(stdin);
	gets(e3.emp_company_name);
	
	
	// forth employee detail :
	
	system("CLS");
	
	cout << "Enter forth employee detail :" << endl << endl;
	
	cout << "Employee id : ";
	cin >> e4.emp_id;
	
	cout << "Employee name : ";
	fflush(stdin);
	gets(e4.emp_name);
	
	cout << "Employee age : ";
	cin >> e4.emp_age;
	
	cout << "Employee experience : ";
	cin >> e4.epm_exp;
	
	cout << "Employee salary : ";
	fflush(stdin);
	cin >> e4.emp_salary;
	
	cout << "Employee role : ";
	fflush(stdin);
	gets(e4.emp_role);
	
	cout << "Employee city : ";
	fflush(stdin);
	gets(e4.emp_city);
	
	cout << "Employee company name : ";
	fflush(stdin);
	gets(e4.emp_company_name);
	
	
	// fifth employee detail :
	
	system("CLS");
	
	cout << "Enter five employee detail :" << endl << endl;
	
	cout << "Employee id : ";
	cin >> e5.emp_id;
	
	cout << "Employee name : ";
	fflush(stdin);
	gets(e5.emp_name);
	
	cout << "Employee age : ";
	cin >> e5.emp_age;
	
	cout << "Employee experience : ";
	cin >> e5.epm_exp;
	
	cout << "Employee salary : ";
	fflush(stdin);
	cin >> e5.emp_salary;
	
	cout << "Employee role : ";
	fflush(stdin);
	gets(e5.emp_role);
	
	cout << "Employee city : ";
	fflush(stdin);
	gets(e5.emp_city);
	
	cout << "Employee company name : ";
	fflush(stdin);
	gets(e5.emp_company_name);
	
	
	// sixth employee detail :
	
	system("CLS");
	
	cout << "Enter six employee detail :" << endl << endl;
	
	cout << "Employee id : ";
	cin >> e6.emp_id;
	
	cout << "Employee name : ";
	fflush(stdin);
	gets(e6.emp_name);
	
	cout << "Employee age : ";
	cin >> e6.emp_age;
	
	cout << "Employee experience : ";
	cin >> e6.epm_exp;
	
	cout << "Employee salary : ";
	fflush(stdin);
	cin >> e6.emp_salary;
	
	cout << "Employee role : ";
	fflush(stdin);
	gets(e6.emp_role);
	
	cout << "Employee city : ";
	fflush(stdin);
	gets(e6.emp_city);
	
	cout << "Employee company name : ";
	fflush(stdin);
	gets(e6.emp_company_name);
	
	
	// seventh employee detail :
	
	system("CLS");
	
	cout << "Enter seven employee detail :" << endl << endl;
	
	cout << "Employee id : ";
	cin >> e7.emp_id;
	
	cout << "Employee name : ";
	fflush(stdin);
	gets(e7.emp_name);
	
	cout << "Employee age : ";
	cin >> e7.emp_age;
	
	cout << "Employee experience : ";
	cin >> e7.epm_exp;
	
	cout << "Employee salary : ";
	fflush(stdin);
	cin >> e7.emp_salary;
	
	cout << "Employee role : ";
	fflush(stdin);
	gets(e7.emp_role);
	
	cout << "Employee city : ";
	fflush(stdin);
	gets(e7.emp_city);
	
	cout << "Employee company name : ";
	fflush(stdin);
	gets(e7.emp_company_name);
	 
	 
	 
	
	// print first employee details
	
	cout << endl << endl << "First employee detail :" << endl << endl;
	cout << "Employee id : " << e1.emp_id << endl;
	cout << "Employee name : " << e1.emp_name << endl;
	cout << "Employee age : " << e1.emp_age << endl;
	cout << "Employee experience : " << e1.epm_exp << endl;
	cout << "Employee salary : " << e1.emp_salary << endl;
	cout << "Employee role : " << e1.emp_role << endl;
	cout << "Employee city : " << e1.emp_city << endl;
	cout << "Employee company name : " << e1.emp_company_name << endl;
	
	
	// print second employee details
	
	cout << endl << endl << "Second employee detail :" << endl << endl;
	cout << "Employee id : " << e2.emp_id << endl;
	cout << "Employee name : " << e2.emp_name << endl;
	cout << "Employee age : " << e2.emp_age << endl;
	cout << "Employee experience : " << e2.epm_exp << endl;
	cout << "Employee salary : " << e2.emp_salary << endl;
	cout << "Employee role : " << e2.emp_role << endl;
	cout << "Employee city : " << e2.emp_city << endl;
	cout << "Employee company name : " << e2.emp_company_name << endl;
	
	
	// print third employee details
	
	cout << endl << endl << "third employee detail :" << endl << endl;
	cout << "Employee id : " << e3.emp_id << endl;
	cout << "Employee name : " << e3.emp_name << endl;
	cout << "Employee age : " << e3.emp_age << endl;
	cout << "Employee experience : " << e3.epm_exp << endl;
	cout << "Employee salary : " << e3.emp_salary << endl;
	cout << "Employee role : " << e3.emp_role << endl;
	cout << "Employee city : " << e3.emp_city << endl;
	cout << "Employee company name : " << e3.emp_company_name << endl;
	
	
	// print forth employee details
	
	cout << endl << endl << "forth employee detail :" << endl << endl;
	cout << "Employee id : " << e4.emp_id << endl;
	cout << "Employee name : " << e4.emp_name << endl;
	cout << "Employee age : " << e4.emp_age << endl;
	cout << "Employee experience : " << e4.epm_exp << endl;
	cout << "Employee salary : " << e4.emp_salary << endl;
	cout << "Employee role : " << e4.emp_role << endl;
	cout << "Employee city : " << e4.emp_city << endl;
	cout << "Employee company name : " << e4.emp_company_name << endl;
	
	
	// print fifth employee details
	
	cout << endl << endl << "fifth employee detail :" << endl << endl;
	cout << "Employee id : " << e5.emp_id << endl;
	cout << "Employee name : " << e5.emp_name << endl;
	cout << "Employee age : " << e5.emp_age << endl;
	cout << "Employee experience : " << e5.epm_exp << endl;
	cout << "Employee salary : " << e5.emp_salary << endl;
	cout << "Employee role : " << e5.emp_role << endl;
	cout << "Employee city : " << e5.emp_city << endl;
	cout << "Employee company name : " << e5.emp_company_name << endl;
	
	
	// print third employee details
	
	cout << endl << endl << "sixth employee detail :" << endl << endl;
	cout << "Employee id : " << e6.emp_id << endl;
	cout << "Employee name : " << e6.emp_name << endl;
	cout << "Employee age : " << e6.emp_age << endl;
	cout << "Employee experience : " << e6.epm_exp << endl;
	cout << "Employee salary : " << e6.emp_salary << endl;
	cout << "Employee role : " << e6.emp_role << endl;
	cout << "Employee city : " << e6.emp_city << endl;
	cout << "Employee company name : " << e6.emp_company_name << endl;
	
	
	// print seventh employee details
	
	cout << endl << endl << "seventh employee detail :" << endl << endl;
	cout << "Employee id : " << e7.emp_id << endl;
	cout << "Employee name : " << e7.emp_name << endl;
	cout << "Employee age : " << e7.emp_age << endl;
	cout << "Employee experience : " << e7.epm_exp << endl;
	cout << "Employee salary : " << e7.emp_salary << endl;
	cout << "Employee role : " << e7.emp_role << endl;
	cout << "Employee city : " << e7.emp_city << endl;
	cout << "Employee company name : " << e7.emp_company_name << endl;
	
	return 0;
}

