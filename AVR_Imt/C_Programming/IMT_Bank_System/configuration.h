

/* User Registerion function declaration*/
#ifndef CONFIGURATION_H
#define CONFIGURATION_H

void EnterSystem();
void EnterUserName(char *Name); // ** ? 
void DisplayUserName(char *Name);
void EnterUserAddress(char *Address);
void EnterUserNationalId(u64 *National_Id);
void EnterUserAge(u16 *Age); 
s64 Generate_UserAccountId();
s64 Generate_UserPassword();
void Enter_Balance(u16 *Balance);

Customer_DataBase *create_Node();
Customer_DataBase *Search_Exist_Account(s64 Id,Customer_DataBase*start);
void Make_Transaction(Customer_DataBase *Account_transcated_from , Customer_DataBase *start); // Id1  the account that the transiciton come from 
void changeAccountStatus(Customer_DataBase *Account); 
void get_cash(Customer_DataBase *Account);
void Deposit_in_Account(Customer_DataBase *Account);
void Return_to_main_menu();
u8 choose_from_System_features(Customer_DataBase *Account,Customer_DataBase *start);
void Exit_System();
//Admin_DataBase* create_Admin();
//void add_Admin();
//void Enter_Admin_Info(char **AdminUserName,int **Password);


#endif

