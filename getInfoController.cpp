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

string getProductName(){
	return CHAU_TRON_70;
}

// get quantity
int getQuantity(){
	// do something
}

// Caculation
int caculation(){
// do something
}