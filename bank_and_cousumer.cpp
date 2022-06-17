#include<string.h>
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>

class Bank
{
	public:
		int ac_no;
		char name[100];
		char ac_type[100];
		long int amount;
		long long int number;
		char add[200];
		int birth_year;
		
		// use for assign any user data..(obj.name SetData)..
		void SetData(int number)
		{
			system("CLS");
			cout << endl << "\t\tENTER DETAILS :" << endl << endl;
			ac_no =number;
			cout << "\t\tYour Name : "; fflush(stdin); gets(this->name);
			cout << endl << "\t\tAccount Type(C for Currrent S for Saving) : "; fflush(stdin); gets(this->ac_type);
			cout << endl << "\t\tAmount : "; cin >> this->amount;
			cout << endl << "\t\tMobile Number : "; cin >> this->number;
			cout << endl << "\t\tBirth Year : "; fflush(stdin); cin >> this->birth_year;
			cout << endl << "\t\tAddress : "; fflush(stdin); gets(this->add);
		}
		
		// use for print any user data..(obj.name GetData)..
		void GetData()
		{
			cout << endl << endl << "\t\t-> Account Number : " << this->ac_no << endl << endl
			<< "\t\t-> Name : " << this->name << endl << endl
			<< "\t\t-> Account Type : " << this->ac_type << endl << endl
			<< "\t\t-> Amount : " << this->amount << endl << endl
			<< "\t\t-> Mobile Number : " << this->number << endl << endl
			<< "\t\t-> Address : " << this->add << endl << endl
			<< "\t\t-> Birth Year : " << this->birth_year << endl << endl;
		}
		
};


// main function starts here
int main()
{
		Bank u[100];
		int ch;
		int number = 1;
		int cheak,i;
		
start:		
		system("CLS");
		// main manu
		cout << "\t\t====================="<< endl << "\t\t   WElCOME TO BANK   " << endl 
		<< "\t\t=====================" << endl << endl << "\t\t   :: MAIN MANU ::" << endl << endl
			
		<< "\t\t1. CREAT AN ACCOUNT" << endl << endl
		<< "\t\t2. MODIFIED ACCOUNT" << endl << endl
		<< "\t\t3. DEPOSITE AMOUNT" << endl << endl
		<< "\t\t4. WITHDRAW AMOUNT" << endl << endl
		<< "\t\t5. FIND ACCOUNT" << endl << endl
		<< "\t\t6. EXIT" << endl << endl;
		
		
		cout << endl << endl << "\t\tEnter Your Choice (1 to 6) : ";
		cin >> ch;
		
	
	switch(ch)
	{
		
		// creat account
		case 1:
			
				u[number].SetData(number);
				
				cout << endl << endl << "\t\tYour Account Number is : " << number << endl << endl;
				cout << endl << endl << "\t\tACCOUNT CREATED ";
				number++;
				getchar();
				system("CLS");
				goto start;
			break;
		
		// modified
		case 2:
				int n3,choice;
				
				system("CLS");
				cout << endl << "\t\tMODIFIED ACCOUNT : " << endl << endl;
				
				cout << endl << "\t\tEnter Your Account Number : ";
				cin >> n3;	
				
				if(n3 <= number)
				{
					cout << endl << endl << "\t\tWHAT DO YOU WANT TO MODIFIED" << endl << endl;
					cout << "\t\t1. Name" << endl << endl
					<< "\t\t2. Account Type" << endl << endl
					<< "\t\t3. Mobile Number" << endl << endl
					<< "\t\t4. Birth Year" << endl << endl
					<< "\t\t5. Address" << endl << endl;
					
					cout << endl << endl << "\t\tEnter Your Choice (1 to 5) : ";
					cin >> choice;
					
					switch(choice)
					{
						// name
						case 1:
							
							char str1[100];
							
							system("CLS");
							
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									cout << endl << endl << "\t\tYour Current Name is : " << u[i].name << endl;
								}
							}
											
							cout << endl << endl << "\t\tEnter Your New name : ";
							fflush(stdin);
							gets(str1);
											
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									strcpy(u[i].name,str1);
									cout << endl << endl << "\t\tNAME UPDATED : " << u[i].name;
								}
							}
											
							cout << endl << endl << endl << "\t\tPress Any Key For Main Manu...";
							system("pause>nul");
							goto start;
						break;
						
						// account type	
						case 2:
							
							char str2[100];
							
							system("CLS");
							cout << "\t\tAccount Type :"<< endl << endl << "\t\tC : Current" << endl << "\t\tS : Saving" << endl << endl;
							
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									cout << endl << endl << "\t\tYour Account Type is : " << u[i].ac_type << endl;
								}
							}
											
							cout << endl << endl << "\t\tEnter Account Type : ";
							fflush(stdin);
							gets(str2);
											
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									strcpy(u[i].ac_type,str2);
									cout << endl << endl << "\t\tACCOUNT TYPE UPDATED : " << u[i].ac_type;
								}
							}
											
							cout << endl << endl << endl << "\t\tPress Any Key For Main Manu...";
							system("pause>nul");
							goto start;
						break;
							
						case 3:
							
							long long int mod_num;
							system("CLS");
							
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									cout << endl << endl << "\t\tYour Number is : " << u[i].number << endl;
								}
							}
											
							cout << endl << endl << "\t\tEnter New Number : ";
							cin >> mod_num;
											
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									u[i].number = mod_num;
									cout << endl << endl << "\t\tNUMBER UPDATED : " << u[i].number;
								}
							}
											
							cout << endl << endl << endl << "\t\tPress Any Key For Main Manu...";
							system("pause>nul");
							goto start;
						break;
						
						// birth year
						case 4:
							int mod_year;
							system("CLS");
							
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									cout << endl << endl << "\t\tYour Birth Year : " << u[i].birth_year << endl;
								}
							}
											
							cout << endl << endl << "\t\tEnter New Year : ";
							cin >> mod_year;
											
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									u[i].birth_year = mod_year;
									cout << endl << endl << "\t\tBIRTH YEAR UPDATED : " << u[i].birth_year;
								}
							}
							
							cout << endl << endl << endl << "\t\tPress Any Key For Main Manu...";
							system("pause>nul");
							goto start;
						break;
						
						// address
						case 5:
							
							char str3[100];
							
							system("CLS");
							
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									cout << endl << endl << "\t\tYour Current Address is : " << u[i].add << endl;
								}
							}
											
							cout << endl << endl << "\t\tEnter New Address : ";
							fflush(stdin);
							gets(str3);
											
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == n3)
								{
									strcpy(u[i].add,str3);
									cout << endl << endl << "\t\tADDRESS UPDATED : " << u[i].add;
								}
							}
											
							cout << endl << endl << endl << "\t\tPress Any Key For Main Manu...";
							system("pause>nul");
							goto start;
							break;
							
							
							default :  cout << endl << endl << "Invalid Choice...";
										system("pause>nul");
										goto start;
					}
					
					system("pause>nul");
					goto start;
				}
				else
				{
					cout << endl << endl << "\t\tNO ACCOUT FOUND..";
					system("pause>nul");
					goto start;
				}			
				
			break;
			
		// deposite
		case 3:
				int n2,amo2;
				system("CLS");
				cout << endl << "\t\tDEPOSITE AMOUNT : " << endl << endl;
				
				cout << endl << "\t\tEnter Your Account Number : ";
				cin >> n2;
				
				if(n2 <= number)
				{
					for(i=1;i<number;i++)
					{
						if(u[i].ac_no == n2)
						{
							cout << endl << endl << "\t\tYour Current Balance is : " << u[i].amount << endl;
						}
					}
					
					cout << endl << endl << "\t\tEnter Your Amount for deposite : ";
					cin >> amo2;
					
					for(i=1;i<number;i++)
					{
						if(u[i].ac_no == n2)
						{
							u[i].amount = u[i].amount + amo2;
							cout << endl << endl << "\t\tUPDATED AMOUNT : " << u[i].amount;
						}
					}
					
					cout << endl << endl << endl << "\t\tPress Any Key For Main Manu...";
					system("pause>nul");
					goto start;
				}
				else
				{
					cout << endl << endl << "\t\tNO ACCOUT FOUND..";
					system("pause>nul");
					goto start;
				}
					
			break;
			
		// withdraw	
		case 4:		
				int n,amo;
				system("CLS");
				cout << endl << "\t\tWITHDRAW AMOUNT : " << endl << endl;
				
				cout << endl << "\t\tEnter Your Account Number : ";
				cin >> n;
				
				if(n <= number)
				{
					for(i=1;i<number;i++)
					{
						if(u[i].ac_no == n)
						{
							cout << endl << endl << "\t\tYour Current Balance is : " << u[i].amount << endl;
						}
					}
					
					cout << endl << endl << "\t\tEnter Your Amount for withdraw : ";
					cin >> amo;
					
					
						for(i=1;i<number;i++)
						{
							if(u[i].ac_no == n)
							{
								if(amo <= u[i].amount)
								{
									u[i].amount = u[i].amount - amo;
									cout << endl << endl << "\t\tUPDATED AMOUNT : " << u[i].amount;
									
									cout << endl << endl << endl << "\t\tPress Any Key For Main Manu...";
									system("pause>nul");
									goto start;
								}
								else
								{
									cout << endl << endl << "\t\tNOT POSSIBLE....BECOUSE OF WITHDRAW AMOUNT MORE THAN BALANCE";
									system("pause>nul");
									goto start;
								}
							}
						}
					
				}
				else
				{
					cout << endl << endl << "\t\tNO ACCOUT FOUND..";
					system("pause>nul");
					goto start;
				}
				
			break;
		
		// find account
		case 5:
			
			int ch2;
			system("CLS");
			
			cout << endl << "\t\tFIND ACCOUNT :" << endl << endl;
			
			cout << "\t\t1. View All Accounts" << endl << endl
				 << "\t\t2. By Account Number" << endl << endl;
				 
			cout << endl << endl << "\t\tEnter Your Choice : ";
			cin >> ch2;
			
			system("CLS");
			
			switch(ch2)
			{
				case 1:
						for(i=1;i<number;i++)
						{
							cout << endl << endl << "\t\tACOUNT " << i << " DETAILS : " << endl;
							u[i].GetData();
						}
						
						cout << endl << "\t\tPress Any Key For Main Manu...";
						system("PAUSE>NULL");
						goto start;
					break;
					
				case 2:
						cout << endl << endl << "\t\tEnter Your Account Number : ";
						cin >> cheak;
			
						if(cheak <= number)
						{
							for(i=1;i<number;i++)
							{
								if(u[i].ac_no == cheak)
								{
									u[i].GetData();
								}
							}
				
							cout << endl << endl << "\t\t";
							system("PAUSE");
							goto start;
						}
						else
						{
							cout << endl << "\t\tACCOUNT NUMBER NOT EXIST ";
							system("PAUSE>NUll");
							goto start;
						}
				
				default : cout << "Invalid Choice...";
							system("PAUSE>NUll");
							goto start;
			
			}
			
			
		case 6:
				exit(0);
				break;
				
		default : cout << "Invalid Choice....";
					goto start;
	}
	
	return 0;
}
