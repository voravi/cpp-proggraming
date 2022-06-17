#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class A
{
	public:
		int id;
		char name[100];
		int age;
		long int salary;
		int exp;
		char role[50];
		static char company_name[30];
		char email[50];
};

class B : public A
{
	public:
		void Set_Data1()
		{
			cout << "Enter ID : "; cin >> this->id;
			cout << "Enter Name : "; fflush(stdin); gets(this->name);
			cout << "Enter Age : "; cin >> this->age;
		}
		
		void Get_Data1()
		{
			cout << "Id : " << this->id << endl
			<< "Name : " << this->name << endl
			<< "Experience : " << this->exp << endl;
		}
};

class C : public B
{
	public:
		int i,n,choice;
		int age1;
		void Set_Data2()
		{
			Set_Data1();
			cout << "Enter Salary : "; cin >> this->salary;
			cout << "Enter Exp : "; cin >> this->exp;
			cout << "Enter Role : "; fflush(stdin); gets(this->role);
			cout << "Enter E-mail : "; fflush(stdin); gets(this->email);
		}
		
		void Get_Agewise_Data()
		{
//			int age,choice;
			system("CLS");
			// user said for data of  "AGE"
			
			
			cout << endl << endl << "AGE WISW DATA : " << endl;
			cout << endl << "Enter Age : ";
			cin >> age1;
			
			cout << endl << endl << "1. Age : " << age1 << " +" << endl
			<< "2. Age : " << age1 << "-" << endl
			<< "3. Age Fix " << age1 << endl << endl;
		
			cout << "Enter Choice : ";
			cin >> choice;
//			return age,choice;
		}
			
			
};

class D : public C
{
	public:
		int salary1,choice1;
		
		void Get_Data2()
		{
			Get_Data1();
			cout << "Age : " << this->age << endl
			<< "Salary : " << this->salary << endl
			<< "Role : " << this->role << endl
			<< "Email : " << this->email << endl
			<< "Company : " << this->company_name << endl;
		}
		
		void Get_Salarywise_Data()
		{
			
			system("CLS");
			// user said for data of "SALARY"
			cout << endl << endl << "SALARY WISW DATA : " << endl;
			cout << endl << "Enter Salary : ";
			cin >> salary1;
			
			cout << endl << endl << "1. Salary : " << salary1 << " +" << endl
			<< "2. Salary : " << salary1 << "-" << endl
			<< "3. Fixed Salary : " << salary1 << endl << endl;
		
			cout << "Enter Choice : ";
			cin >> choice1;
		}
};

char A::company_name[30] = "Rnw Softech";

int main()
{
	int i,n,ch;
	int age;
	
	cout << "How Many Employee : ";
	cin >> n;
	
	D emp[n];
	
	for(i=0;i<n;i++)
	{
		cout << endl << endl << "Enter Employee " << i+1 << " Details" << endl << endl;
		emp[i].Set_Data2();
		system("CLS");
	}
start:	
	system("CLS");
	cout << endl << "1. VIEW ALL DATA" << endl << endl
	<< "2. AGE WISE" << endl << endl
	<< "3. SELERY WISE" << endl << endl
	<< "4. EXIT" << endl << endl;
	
	cout << "Enter Your choice : ";
	cin >> ch;
		 
	
	switch(ch)
	{
		case 1:
				system("CLS");
				for(i=0;i<n;i++)
				{
					cout << endl << endl << "Employee " << i+1 << " Details :" << endl << endl;
					emp[i].Get_Data2();
				}
				cout << endl << endl << endl << "Press Any Key For Main Manu...";
				system("pause>nul");
				goto start;	
			
			break;
		
		case 2:
				emp[0].Get_Agewise_Data();
				
				switch(emp[0].choice)
				{
					case 1:
							for(i=0;i<n;i++)
							{
								if(emp[i].age > emp[0].age1)
								{
									cout << endl << endl << "Employee " << i+1 << " Details :" << endl << endl;
									emp[i].Get_Data2();
								}
							}
							cout << endl << endl << endl << "Press Any Key For Main Manu...";
							system("pause>nul");
							goto start;	
						break;
						
					case 2:
							for(i=0;i<n;i++)
							{
								if(emp[i].age < emp[0].age1)
								{
									cout << endl << endl << "Employee " << i+1 << " Details :" << endl << endl;
									emp[i].Get_Data2();
								}
							}
							cout << endl << endl << endl << "Press Any Key For Main Manu...";
							system("pause>nul");
							goto start;	
						break;
						
					case 3:
							for(i=0;i<n;i++)
							{
								if(emp[i].age == emp[0].age1)
								{
									cout << endl << endl << "Employee " << i+1 << " Details :" << endl << endl;
									emp[i].Get_Data2();
								}
							}
							cout << endl << endl << endl << "Press Any Key For Main Manu...";
							system("pause>nul");
							goto start;	
						break;
						
					default: cout << "Invalid Choice..";
							 system("pause>nul");
							 goto start;
							 
				}
				
			break;
		// for salary..........
		
		case 3:
				emp[0].Get_Salarywise_Data();
				
				switch(emp[0].choice1)
				{
					case 1:
							for(i=0;i<n;i++)
							{
								if(emp[i].salary > emp[0].salary1)
								{
									cout << endl << endl << "Employee " << i+1 << " Details :" << endl << endl;
									emp[i].Get_Data2();
								}
							}
							cout << endl << endl << endl << "Press Any Key For Main Manu...";
							system("pause>nul");
							goto start;	
						break;
						
					case 2:
							for(i=0;i<n;i++)
							{
								if(emp[i].salary < emp[0].salary1)
								{
									cout << endl << endl << "Employee " << i+1 << " Details :" << endl << endl;
									emp[i].Get_Data2();
								}
							}
							cout << endl << endl << endl << "Press Any Key For Main Manu...";
							system("pause>nul");
							goto start;	
						break;
						
					case 3:
							for(i=0;i<n;i++)
							{
								if(emp[i].salary == emp[0].salary1)
								{
									cout << endl << endl << "Employee " << i+1 << " Details :" << endl << endl;
									emp[i].Get_Data2();
								}
							}
							cout << endl << endl << endl << "Press Any Key For Main Manu...";
							system("pause>nul");
							goto start;	
						break;
						
					default: cout << "Invalid Choice..";
							 system("pause>nul");
							 goto start;
							 
				}
			break;
			
		case 4:
			exit(0);
			break;
			
		default : goto start;
	}
		 
	return 0;
}
