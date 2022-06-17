#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class Highschool
{
	private:
		
		int stu_id;
		char stu_name[100];
		int stu_roll;
		int stu_std;
		int stu_age;
		int stu_contect;
		static char stu_edu_institute_name[100];
		char stu_address[100];
		
	public:
		
		void SetData()
		{
			cout << "Stu_id : "; cin >> this->stu_id;
			cout << "Stu_name : "; fflush(stdin); gets(this->stu_name);
			cout << "stu_roll : "; cin >> this->stu_roll;
			cout << "stu_std : "; cin >> this->stu_std;
			cout << "Stu_age : "; cin >> this->stu_age;
			cout << "stu_contect : "; cin >> this->stu_contect;
			cout << "stu_address : "; fflush(stdin); gets(this->stu_address);
		}
		
		void GetData()
		{
			cout << endl << endl << "Student id : " << this->stu_id 
			<< endl << "Student name : " << this->stu_name
			<< endl << "Student roll : " << this->stu_roll
			<< endl << "Student std : " << this->stu_std
			<< endl << "Student age : " << this->stu_age
			<< endl << "Student contect : " << this->stu_contect
			<< endl << "Student address : " << this->stu_address
			<< endl << "Student Istitute name : " << stu_edu_institute_name;
		}
};

class Collage
{
	private:
		
		int stu_id;
		char stu_name[100];
		int stu_roll;
		int stu_std;
		int stu_age;
		int stu_contect;
		static char stu_edu_institute_name[100];
		char stu_address[100];
		
	public:
		
		void SetData()
		{
			cout << "Stu_id : "; cin >> this->stu_id;
			cout << "Stu_name : "; fflush(stdin); gets(this->stu_name);
			cout << "stu_roll : "; cin >> this->stu_roll;
			cout << "stu_std : "; cin >> this->stu_std;
			cout << "Stu_age : "; cin >> this->stu_age;
			cout << "stu_contect : "; cin >> this->stu_contect;
			cout << "stu_address : "; fflush(stdin); gets(this->stu_address);
			
		}
		
		void GetData()
		{
			cout << endl << endl << "Student id : " << this->stu_id 
			<< endl << "Student name : " << this->stu_name
			<< endl << "Student roll : " << this->stu_roll
			<< endl << "Student std : " << this->stu_std
			<< endl << "Student age : " << this->stu_age
			<< endl << "Student contect : " << this->stu_contect
			<< endl << "Student address : " << this->stu_address
			<< endl << "Student Istitute name : " << stu_edu_institute_name;
		}
};

char Highschool::stu_edu_institute_name[100] = "Red And White";
char Collage::stu_edu_institute_name[100] = "Red And White";

int main()
{
	Highschool s[100];
	Collage cs[100];
	int n,n1,i;
	
	cout << "How many school students : ";
	cin >> n;
	
	cout << endl << "How many collage students : ";
	cin >> n1;
	
	// read
	for(i=1;i<=n;i++)
	{
		cout << endl << endl << "Enter student " << i << " imformation : " << endl << endl;
		s[i].SetData();
	}
	
	system("CLS");
	
	for(i=1;i<=n1;i++)
	{
		cout << endl << endl << "Enter collage student " << i << " imformation : " << endl << endl;
		cs[i].SetData();
	}
	
	system("CLS");
	
	// print
	for(i=1;i<=n;i++)
	{
		cout << endl << endl << "Student " << i << " imformation : " << endl;
		s[i].GetData();
	}
	
	for(i=1;i<=n;i++)
	{
		cout << endl << endl << "collage Student " << i << " imformation : " << endl;
		cs[i].GetData();
	}
	
	return 0;
}
