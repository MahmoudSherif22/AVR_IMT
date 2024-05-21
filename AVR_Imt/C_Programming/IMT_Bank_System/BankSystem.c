#include<stdio.h>
#include <inttypes.h> 
#include<stdlib.h>
#include <math.h>
#include <string.h>
#include"STDType.h"
#include"User_Info.h"
#include"configuration.h"

Customer_DataBase *start = NULL;
Customer_DataBase *end   = NULL ;

int main()
{
	
    /*variable declartation*/	
    char Choice = 'n';
    char Admin_UserName[20] = "Mahmoud";
    int Admin_Password = 1234 ;

do
{
	
	
    system("cls");
    printf("                            Welcome to IMT Bank System\n");
	
    /*variables declaration*/
	
    u8 Window_Choice ='d'; 
    

    /*take input from user */
	
    printf("which Operation do you want to do ?\n");   
    printf("1 - > Admin Window \n");
    printf("2 - > Client Window \n");
    scanf(" %c",&Window_Choice);

    /*check which window the user want */
	
if (Window_Choice == '1')
{   // Admin
    char UserName_input[20];
	s16 password_input = 0 ;
	u8 check_username = '0';
	u8 check_password = '1';
	char Admin_OP_Choice = '0'; 
	
	// take user name and passwaord 

	
	do 
	{
		printf("Enter UserName : \n");
		scanf("%19s",UserName_input);
		
		if(strcmp(UserName_input,Admin_UserName) != 0)
		{
			printf("Wrong User Name Please Try Again \n");
			check_username = '1';
			
		}
		else 
		{
			check_username = '0';
		}
		
		}while(check_username == '1'); 
		
		do 
		{
			printf("Enter Password : ");
			scanf("%hu",&password_input) ;
			if(password_input!= Admin_Password)
			{
			printf("Wrong password please try again :\n");
			check_password = '1';
			}
			else 
			{
				check_password = '0';
				printf("Welcome Mahmoud\n");
				break;
			}
			
		}while(check_password == '1');
		
		
		
		// admin choose for operations 
		
		u8 return_Admin_window_choice ='1';
		do{
	printf("          Welcome to Admin Window \n");
	printf("Which Operation do you want to do ?\n");
	printf("Chose 1 to create new account\n");
	printf("Choose 2 to open existing account\n");
	printf("Choose 3 to exit system\n");
	
	scanf(" %c",&Admin_OP_Choice);
	if(Admin_OP_Choice == '1')
	{ // create new account
		Customer_DataBase *obj = create_Node();
		EnterUserName(obj->UserName);	   
		EnterUserAddress(obj->UserAddress);
		EnterUserNationalId(&obj->National_Id);
		EnterUserAge(&obj->Age);
		
		if(obj->Age < 21)
		{
		printf("Enter Your Gaurdian National Id : \n");
		scanf("%" SCNd64,&obj->Gaurdian_National_Id);
		}
		
		else 
		{
			obj->National_Id = 0 ;
		}
		obj->Bank_Account_Id = Generate_UserAccountId();
		obj->Bank_Account_password =Generate_UserPassword();
		Enter_Balance(&obj->Balance);
		obj->Account_Status = '1';
		
	
	if(start == NULL)
	{
		start = obj;  
		obj->next =NULL;
		end = obj ;
	}
	else 
	{
		Customer_DataBase *iterator =start; 
		while(iterator->next!=NULL)
        {
            iterator=iterator->next;
        }
		obj->next = NULL;
		iterator->next = obj;
		
	}
	
	
	}
	else if (Admin_OP_Choice == '2')
	{ // open existing account
	    
		s64  Admin_Bank_Account_Id  ;
		printf("Enter Accout Bank ID : \n");
		scanf("%I64d",&Admin_Bank_Account_Id);
		if(Search_Exist_Account(Admin_Bank_Account_Id,start) != NULL)
		{ // account found 
			Customer_DataBase *Targeted_Account =Search_Exist_Account(Admin_Bank_Account_Id,start);
			
			// choose between features
			return_Admin_window_choice = choose_from_System_features(Targeted_Account,start);
			
		}
			
		
	}
	else if(Admin_OP_Choice == '3')
	{ // exist system
		/*Do no thing*/
	}
	
	

	}
while(return_Admin_window_choice == '0');

 


}


else if (Window_Choice == '2')
{ // client window 
    u8 return_client_window_choice = '1';
	do{
    printf("Welcome to client window :) \n");
    s64  UserInput_Bank_Account_Id;
	s64  UserInput_Bank_Account_Password;
	char check_AccountId='0';
 	
	
	
	do 
	{
		printf("Enter Bank Account ID : \n");
		scanf("%I64d",&UserInput_Bank_Account_Id);
		
		if(Search_Exist_Account(UserInput_Bank_Account_Id,start) != NULL)
		{ // account exist
			check_AccountId = '0';
		}
		else 
		{
			printf("Wrong Account Id Please Try Again \n");
			check_AccountId = '1';
		}
		
		}while(check_AccountId == '1'); 
		
		Customer_DataBase *Targeted_Account2 =Search_Exist_Account(UserInput_Bank_Account_Id,start);
		do 
		{
			printf("Enter Password : ");
			scanf("%I64d",&UserInput_Bank_Account_Password) ;
			if(UserInput_Bank_Account_Password!= Targeted_Account2->Bank_Account_password)
			{
			printf("Wrong password please try again :\n");
			check_AccountId = '1';
			}
			else 
			{
				check_AccountId = '0';
				printf("Welcome Mr %s \n",Targeted_Account2->UserName);
				break;
			}
		}while(check_AccountId == '1');
		return_client_window_choice = choose_from_System_features(Targeted_Account2,start);
		}while(return_client_window_choice == '0');
}
else 
{
	printf("Sry this operation are not supported\n");	
}

printf("Do You want to Do Another operation ? y | n\n");
scanf(" %c",&Choice);

}while(Choice == 'y'); //  corner case 








return 0 ;

}












