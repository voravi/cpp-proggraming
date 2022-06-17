#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class Stu
{
	private:
		int maths;
		int phy;
		int chem;
		
	public:
		void SetData()
		{
			cout << "Physices Marks : ";
			cin >> this->phy;
			cout << "Chemestry Marks : ";
			cin >> this->chem;
			cout << "Maths Marks : ";
			cin >> this->maths;
		}
		
		void Grade()
		{
			if(maths > 80 && phy > 75 && chem > 72)
			{
				cout << "A Grade" << endl << endl;
			}
			else if(maths >= 60 && phy >= 55 && chem >= 50)
			{
				cout << "B Grade" << endl << endl;
			}
			else if(maths >= 40 || phy >= 35 || chem >= 35)
			{
				cout << "C Grade" << endl << endl;
			}
			else
			{
				cout << endl << endl << "Fail...";
			}
		}
};

int main()
{
	int n,i;
	
	cout << "Enter How many students : ";
	cin >> n;
	
	Stu s[n];
	
	for(i=0;i<n;i++)
	{
		cout << endl<< "Enter Student " << i+1 << " Imformation : " << endl << endl;
		s[i].SetData();
//		system("CLS");
	}
	
	for(i=0;i<n;i++)
	{
		cout << endl<< "Student " << i+1 << " grade : " << endl << endl;
		s[i].Grade();
	}
	return 0;
}
