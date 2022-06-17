#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>

class Student
{
	private:
		int stu_id;
		char stu_name[100];
		int stu_age;
		char stu_cource[100];
		static char stu_clg[100];
		static char stu_city[100];
		
	public:
		void SetData()
		{
			cout << "Stu_id : "; cin >> this->stu_id;
			cout << "Stu_name : "; fflush(stdin); gets(this->stu_name);
			cout << "Stu_age : "; cin >> this->stu_age;
			cout << "Stu_cource : "; fflush(stdin); gets(this->stu_cource);
		}
		
		void GetData()
		{
			cout << endl << endl << "Student id : " << this->stu_id 
			<< endl << "Student name : " << this->stu_name
			<< endl << "Student age : " << this->stu_age
			<< endl << "Student cource : " << this->stu_cource
			<< endl << "Student collage : " << stu_clg
			<< endl << "Student city : " << stu_city;
		}
		
		static void Change_clg()
		{
			strcpy(stu_clg , "XYZ");
		}
		
};

char Student::stu_clg[100] = "RNW";
char Student::stu_city[100] = "surat";

int main()
{
	int n,i;
	
	cout << "How many Student : ";
	cin >> n;
	
	Student s[n];
	
	for(i=1;i<=n;i++)
	{
		cout << endl << endl << "Enter student " << i << " imformation : " << endl << endl;
		s[i].SetData();
		system("CLS");
	}
	
//	Student::Change_clg();
	
	for(i=1;i<=n;i++)
	{
		cout << endl << endl << "Student " << i << " imformation : " << endl << endl;
		s[i].GetData();
	}
	
	return 0;
}
