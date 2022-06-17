#include<iostream>
using namespace std;

class Stu
{
	public:
 		int stu_id;
		char stu_name[100];
		int stu_age;
		char stu_cource[100];
		char stu_collage[100];
		char stu_city[100];
};

int main()
{
	Stu s1,s2,s3,s4,s5;
	
	// first student info
	
	cout << "Enter First student Info :" << endl << endl;
	
	cout << "student id : ";
	cin >> s1.stu_id;
	
	cout << "Student name : ";
	fflush(stdin);
	gets(s1.stu_name);
	
	cout << "Student age : ";
	cin >> s1.stu_age;
	
	cout << "Student cource : ";
	fflush(stdin);
	gets(s1.stu_cource);
	
	cout << "Student collage : ";
	fflush(stdin);
	cin >> s1.stu_collage;
	
	cout << "Student city : ";
	fflush(stdin);
	gets(s1.stu_city);


	// Second student Info :
	
	system("CLS");
	cout << "Enter Second student Info :" << endl << endl;
	
	cout << "student id : ";
	cin >> s2.stu_id;
	
	cout << "Student name : ";
	fflush(stdin);
	gets(s2.stu_name);
	
	cout << "Student age : ";
	cin >> s2.stu_age;
	
	cout << "Student cource : ";
	fflush(stdin);
	gets(s2.stu_cource);
	
	cout << "Student collage : ";
	fflush(stdin);
	cin >> s2.stu_collage;
	
	cout << "Student city : ";
	fflush(stdin);
	gets(s2.stu_city);
	
	
	// Third student Info :
	
	system("CLS");
	cout << "Enter Third student Info :" << endl << endl;
	
	cout << "student id : ";
	cin >> s3.stu_id;
	
	cout << "Student name : ";
	fflush(stdin);
	gets(s3.stu_name);
	
	cout << "Student age : ";
	cin >> s3.stu_age;
	
	cout << "Student cource : ";
	fflush(stdin);
	gets(s3.stu_cource);
	
	cout << "Student collage : ";
	fflush(stdin);
	cin >> s3.stu_collage;
	
	cout << "Student city : ";
	fflush(stdin);
	gets(s3.stu_city);
	
	
	// Forth student Info :
	
	system("CLS");
	cout << "Enter forth student Info :" << endl << endl;
	
	cout << "student id : ";
	cin >> s4.stu_id;
	
	cout << "Student name : ";
	fflush(stdin);
	gets(s4.stu_name);
	
	cout << "Student age : ";
	cin >> s4.stu_age;
	
	cout << "Student cource : ";
	fflush(stdin);
	gets(s4.stu_cource);
	
	cout << "Student collage : ";
	fflush(stdin);
	cin >> s4.stu_collage;
	
	cout << "Student city : ";
	fflush(stdin);
	gets(s4.stu_city);
	
	
	// Fifth student Info :
	
	system("CLS");
	cout << "Enter fifth student Info :" << endl << endl;
	
	cout << "student id : ";
	cin >> s5.stu_id;
	
	cout << "Student name : ";
	fflush(stdin);
	gets(s5.stu_name);
	
	cout << "Student age : ";
	cin >> s5.stu_age;
	
	cout << "Student cource : ";
	fflush(stdin);
	gets(s5.stu_cource);
	
	cout << "Student collage : ";
	fflush(stdin);
	cin >> s5.stu_collage;
	
	cout << "Student city : ";
	fflush(stdin);
	gets(s5.stu_city);
	
	system("CLS");
	
	// first student inforamtion print
	cout << endl << endl << "First student Info :" << endl << endl;
	cout << "Student id : " << s1.stu_id << endl;
	cout << "Student name : " << s1.stu_name << endl;
	cout << "Student age : " << s1.stu_age<< endl;
	cout << "Student cource : " << s1.stu_cource << endl;
	cout << "Student collage : " << s1.stu_collage << endl;
	cout << "Student city : " << s1.stu_city << endl;
	
	// Second student inforamtion print
	cout << endl << endl << "Second student Info :" << endl << endl;
	cout << "Student id : " << s2.stu_id << endl;
	cout << "Student name : " << s2.stu_name << endl;
	cout << "Student age : " << s2.stu_age<< endl;
	cout << "Student cource : " << s2.stu_cource << endl;
	cout << "Student collage : " << s2.stu_collage << endl;
	cout << "Student city : " << s2.stu_city << endl;
	
	
	// Third student inforamtion print
	cout << endl << endl << "Second student Info :" << endl << endl;
	cout << "Student id : " << s3.stu_id << endl;
	cout << "Student name : " << s3.stu_name << endl;
	cout << "Student age : " << s3.stu_age<< endl;
	cout << "Student cource : " << s3.stu_cource << endl;
	cout << "Student collage : " << s3.stu_collage << endl;
	cout << "Student city : " << s3.stu_city << endl;
	
	
	// Forth student inforamtion print
	cout << endl << endl << "Second student Info :" << endl << endl;
	cout << "Student id : " << s4.stu_id << endl;
	cout << "Student name : " << s4.stu_name << endl;
	cout << "Student age : " << s4.stu_age<< endl;
	cout << "Student cource : " << s4.stu_cource << endl;
	cout << "Student collage : " << s4.stu_collage << endl;
	cout << "Student city : " << s4.stu_city << endl;
	
	
	// fifth student inforamtion print
	cout << endl << endl << "Second student Info :" << endl << endl;
	cout << "Student id : " << s5.stu_id << endl;
	cout << "Student name : " << s5.stu_name << endl;
	cout << "Student age : " << s5.stu_age<< endl;
	cout << "Student cource : " << s5.stu_cource << endl;
	cout << "Student collage : " << s5.stu_collage << endl;
	cout << "Student city : " << s5.stu_city << endl;
	
	return 0;
}

