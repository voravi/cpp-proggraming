#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

/*when all the data menbers and member 
  functions are combined in a single unit called class, 
  and this process is called Encapsulation*/

class Hotel
{
	private: // private and public keyword called access specifier
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		int rate;
		char web[100];
		
	public:	/* when data member or member functions are made public , 
  		    	it can be accessed by everyone */
  		    	
  		    	
		//setter : use for set data
		void SetData()
		{
			cout << "Id : "; cin >> this->id;
			cout << "name : "; fflush(stdin); gets(this->name);
			cout << "type : "; fflush(stdin); gets(this->type);
			cout << "staff_size : "; cin >> this->staff_size;
			cout << "room_size : "; cin >> this->room_size;
			cout << "establish_year : "; cin >> this->establish_year;
			cout << "address : "; fflush(stdin); gets(this->address);
			cout << "rate : "; cin >> this->rate;
			cout << "web : "; fflush(stdin); gets(this->web);
			
		}
		
		// getter : use for get data
		void GetData()
		{
			cout << "Id : " << this->id << endl
			<< "name : " << this->name << endl
			<< "type : " << this->type << endl
			<< "staff_size : " << this->staff_size << endl
			<< "room_size : " << this->room_size << endl
			<< "establish_year : " << this->establish_year << endl
			<< "address : " << this->address << endl
			<< "rate : " << this->rate << endl
			<< "web : " << this->web << endl;
		}
			
};

/* that is main function for call function and use data....*/
int main()
{
	int n,i;
	
	cout << "How many Hotels : ";
	cin >> n;
	
	Hotel h[100];
	
	for(i=1;i<=n;i++)
	{
		cout << endl << "Enter " << i << " hotel details : " << endl << endl;
		h[i].SetData();
		system("CLS");
	}
	
	for(i=1;i<=n;i++)
	{
		cout << endl << "Hotel " << i << " details : " << endl << endl;
		h[i].GetData();
	}
}
