

#ifndef USER_INFO_H
#define USER_INFO_H

#include"STDType.h"

struct Customer_DataBase{   // Linked list of customers 
	
	char UserName[30]     ;
	char UserAddress[30]  ;
	s64  UserNationalId   ;
	u16  Age              ;
	u64 National_Id       ;
	u64 Gaurdian_National_Id ;
	s64  Bank_Account_Id  ;
	u16 Balance           ;
	u16 Account_Status    ; // 1 - > active 0 ->restracted 2 -> closed 
	s64 Bank_Account_password;
	struct Customer_DataBase *next;

};

typedef struct Customer_DataBase    Customer_DataBase;

#endif




