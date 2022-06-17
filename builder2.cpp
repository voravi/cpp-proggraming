#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class First
{
	private:
		int emp_id;
	
		
	public:
		
		void SetData()
		{
			cout << "Stu_id : ";  cin >> this->emp_id;
			
		}
		
		void GetData()
		{
			cout << " Id = " << this->emp_id << endl;
		}
		
		
		
};

class Second
{
	private:
		char emp_name[100];
		First f1;
		
	public:
		
		void setdata()
		{
			f1.SetData();
			cout << "Stu_name : "; fflush(stdin); gets(this->emp_name);
			
		}
		
		void getdata()
		{
			f1.GetData();
			cout << " name = " << this->emp_name << endl;
		} 
		
		
		
};

int main()
{
	int i,n;
	Second s[100];
	
	cout<<"how many student: ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cout << endl << "Enter student " << i << " Detail :" << endl << endl;
		s[i].setdata();
	}

	for(i=1;i<=n;i++)
	{
		cout << endl << "student " << i << " detail :" << endl << endl;
		s[i].getdata();
	}	
	
	return 0;
}
