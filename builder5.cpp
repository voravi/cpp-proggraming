#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class State
{
	public:
		char s1[20] = "Andhra Pradesh"; 	char s2[20] = "Arunachal Pradesh";
		char s3[20] = "Assam";          	char s4[20] = "Bihar";
		char s5[20] = "Chhattisgarh";		char s6[20] = "Delhi";
		char s7[20] = "Goa";				char s8[20] = "Gujarat";
		char s9[20] = "Himachal Pradesh";	char s10[20] = "Jammu and Kashmir";
		char s11[20] = "Jharkhand";			char s12[20] = "Karnataka";
		char s13[20] = "Kerala";			char s14[20] = "Madhya Pradesh";
		char s15[20] = "Maharashtra";		char s16[20] = "Manipur";
		char s17[20] = "Meghalaya";			char s18[20] = "Mizoram";
		char s19[20] = "Nagaland";			char s20[20] = "Orissa";
		char s21[20] = "Punjab";			char s22[20] = "Rajasthan";
		char s23[20] = "Sikkim";			char s24[20] = "Tamil Nadu";
		char s25[20] = "Telangana";			char s26[20] = "Tripura";
		
	static char s27[20];
	static char s28[20];
	static char s29[20];
	
		static void name()
		{
			cout << s27 << endl << s28 << endl << s29;
		}
		
};

char State::s27[20] = "Utter Pradesh";
char State::s28[20] = "Uttarakhand";
char State::s29[20] = "West Bangal";

int main()
{

	State s;

	
	cout << s.s1 << endl; cout << s.s2 << endl; cout << s.s3 << endl;
	cout << s.s4 << endl; cout << s.s5 << endl; cout << s.s6 << endl;
	cout << s.s7 << endl; cout << s.s8 << endl; cout << s.s9 << endl;
	cout << s.s10 << endl; cout << s.s11 << endl; cout << s.s12 << endl;
	cout << s.s13 << endl; cout << s.s14 << endl; cout << s.s15 << endl;
	cout << s.s16 << endl; cout << s.s17 << endl; cout << s.s18 << endl;
	cout << s.s19 << endl; cout << s.s20 << endl; cout << s.s21 << endl;
	cout << s.s22 << endl; cout << s.s23 << endl; cout << s.s24 << endl;
	cout << s.s25 << endl; cout << s.s26 << endl; 
	
	
	State::name();
	
	return 0;
}
