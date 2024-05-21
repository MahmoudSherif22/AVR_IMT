
/*
My notes :
1- scan number for u64 data type need  scanf("%" SCNd64,Id);
2- scan number for s64 data type need %I64d
3- gcc -save-temps -Wall Implementation.c BankSystem.c -o k.exe convert warnings to errors

Your Account ID : 100017368
Your Account Password : 100117877
*/





#ifndef IMPLEMENTATION_C
#define IMPLEMENTATION_C


#include"STDType.h"
#include"stdio.h"   
#include <string.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
#include"User_Info.h"
#include<inttypes.h> //
#endif




void EnterUserName(char *Name)
{
	
	printf("Enter your Full Name : ");
	scanf("%s",Name);
}

	
void EnterUserAddress(char *Address)
{
	
	printf("Enter your Address : ");   // %[^\n]s
	scanf("%s",Address);
	
}

void EnterUserNationalId(u64 *Id)
{ // corner case to handle 
	
	printf("Enter Your National Id : ");
	
	
		
		do{
			scanf("%" SCNd64,Id);
			if(*Id < 10000000000000 )
			{
				
			  printf("Enter number consist of 14 digit please \n ");
			  printf("National Id : ");
			}
		}
		while(*Id < 10000000000000 );
		
	
}
void EnterUserAge(u16 *Age)
{ // Gardein to handle 
	printf("Enter Your Age : ");
	scanf("%hu",Age);
	/*Gaurdain	*/
}
s64 Generate_UserAccountId()
{  // better way than using pow function 
	s64 Id ;
	int min = 100000000;  // Minimum 9-digit number
    int max = 999999999;  // Maximum 9-digit number
	srand(time(NULL));
	// Generate a random number within the range
    Id = min + rand() % (max - min + 1);
	printf("Your Account ID : %I64d \n", Id);
	return Id;
	
}
s64 Generate_UserPassword()
{
	
	s64 Pass ;
	int min = 100000000;  // Minimum 9-digit number
    int max = 999999999;  // Maximum 9-digit number
	srand(time(NULL));
	// Generate a random number within the range
    Pass = min + rand() % (max - min + 1);
	Pass+=100509;
	printf("Your Account Password : %I64d \n", Pass); // use %I64d instead of %lld
	return Pass;
	
}


void Enter_Balance(u16 *Balance)
{
	printf("Enter The Balance :\n");
	scanf("%hu",Balance);
	
}


Customer_DataBase *create_Node()
{
	
	Customer_DataBase *obj;
	obj = (Customer_DataBase*)malloc(sizeof(Customer_DataBase));                       
	return obj ;
	
}



Customer_DataBase *Search_Exist_Account(s64 Id,Customer_DataBase*start)
{
	if(start == NULL)
	{ // Empty database
		printf("There is no accounts in database\n ");
		return NULL;        // ?
		
	}
	else 
	{
		Customer_DataBase *temp = start;
		while(temp->Bank_Account_Id != Id){
			temp =temp->next;
		}
		return temp;
		
	}
	//Account with this id not exist
	printf("There is no account with this id \n");
	return NULL;
	
}

// ,s64 IdAccount_transcated_to
void Make_Transaction(Customer_DataBase *Account_Transcated_From,Customer_DataBase *start)
{
    s64 IdAccount_Transcated_To;
	Customer_DataBase *Account_Transacated_To;
	u16 Balance= 0 ;
	printf("Enter the account id you want to make transiciton to :\n");
	scanf("%I64d",&IdAccount_Transcated_To);
	Account_Transacated_To = Search_Exist_Account(IdAccount_Transcated_To,start);
	printf("Send money :\n");
	scanf("%hu",&Balance); // &Account_Transacated_To->Balane
	if(Balance > Account_Transcated_From->Balance )
	{
		printf("Sry you dont have enough Balance in your account \n");
	}
	else 
	{
		if(Account_Transacated_To->Account_Status == '1' && Account_Transcated_From->Account_Status == '1')
		{// both accounts are active
			Account_Transacated_To->Balance +=Balance ;
			Account_Transcated_From->Balance-=Balance ;
			
		}
		
	}	
}

void changeAccountStatus(Customer_DataBase *Account)
{
	char change_status_op = '0';
	printf("Enter 1 to    Set Account to Active State \n");
	printf("Enter 2 to    Set Account to Restricted State \n");
	printf("Enter 3 to    Set Account to Closed \n");
	scanf(" %c",&change_status_op);
	if(change_status_op == '1')
	{
		Account->Account_Status = '1';
		printf("Account status changed to Active\n");
	}
	else if (change_status_op == '2')
	{
		Account->Account_Status = '0';
		printf("Account status changed to Restricted\n");		
	}
	else if (change_status_op == '3')
	{
		Account->Account_Status = '2';
		printf("Account status changed to Closed\n");
		
	}
	else 
	{
		printf("Invalid Option\n");
	}
}

void get_cash(Customer_DataBase *Account)
{
	u16 balance = 0;
	printf("Enter amount of money : \n");
	scanf("%hu",&balance);
	if(balance > Account->Balance)
	{
		printf("Invalid ,Your bank account can not effort this much \n");
	}
	else 
	{
		Account->Balance -=balance;
		printf("Done\n");
	}
	
}

void Deposit_in_Account(Customer_DataBase *Account)
{
	u16 extra_balance;
	printf("Enter money : \n");
	scanf("%hu",&extra_balance);
	Account->Balance +=extra_balance;
	printf("Done :) \n");
	
}

u8 choose_from_System_features(Customer_DataBase *Account,Customer_DataBase *start)
{
	
	char BankAccount_op ='0';
	char return_Admin_window_choice = '1';
		// choose between features
			printf("Choose 1 to make Transaction \n");
			printf("choose 2 to change account statues \n");
			printf("choose 3 to get cash \n");
			printf("choose 4 to Deposit in Account \n");
			printf("choose 5 return to main menu  \n");
			scanf(" %c",&BankAccount_op);
		
			if(BankAccount_op == '1'&& Account->Account_Status == '1')
			{
				Make_Transaction(Account,start);
				
			}
			else if(BankAccount_op == '2')
			{
				changeAccountStatus(Account);

			}
			else if(BankAccount_op == '3'&& Account->Account_Status == '1')
			{
				 get_cash(Account);

			}
			else if(BankAccount_op == '4'&& Account->Account_Status == '1')
			{
				Deposit_in_Account(Account); 

			}
			else if(BankAccount_op == '5')
			{
				return_Admin_window_choice = '0';
			}
		    else 
			{
			    printf("SryYour Account is not Active \n");
			    printf("You can not perform any operations");
		    }
	
	return return_Admin_window_choice;
	
	
}






