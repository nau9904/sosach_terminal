#include <iostream>
#include <string>
#include "getInfoController.h"


// get type of product
string getTypeOfProduct(short type){
	std::string typeProduct;
	if(type == 1){
		typeProduct = CHAU_TRON;
	}else if(type == 2){
		typeProduct = CHAU_LUC_LANG;
	}else if(type == 3){
		typeProduct = CHAU_VUONG;
	}
	return typeProduct;
}


// get customer
string getCustomer(short cust){
	std::string Customer;
	if(cust == 1){
		// CUST_TUE_ANH_BOOL = true;
		// CUST_OTHER_BOOL = false;
		Customer = CUST_TUEANH;
	}else if(cust == 2){
		// CUST_TUE_ANH_BOOL = false;
		// CUST_OTHER_BOOL = true;
		Customer = CUST_OTHER;
	}
	return Customer;
}

string getProductName(short n){
	std::string name;
	switch (n)
	{
	case 1:
		name = CHAU_TRON_50;
		break;
	case 2:
		name = CHAU_TRON_60;
		break;
	case 3:
		name = CHAU_TRON_70;
		break;
	case 4:
		name = CHAU_TRON_80;
		break;
	case 5:
		name = CHAU_TRON_90;
		break;
	case 6:
		name = CHAU_TRON_100;
		break;
	default:
		break;
	}
	return name;
}

// get quantity
// int getQuantity(){
	// do something
// }

// Caculation
// int caculation(){
// // do something
// }