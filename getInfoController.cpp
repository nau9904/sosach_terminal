#include <iostream>
#include <string>
#include "getInfoController.h"
#include "ChauPriceController.h"
#include "ShowList.h"


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

string getProductName(string type, short position){
	std::string name;
	if(type == CHAU_TRON){
		name = listNameChauTron[position - 1];
	}else if(type == CHAU_LUC_LANG){
		name = listNameChauLucLang[position - 1];
	}else if(type == CHAU_VUONG){
		name = listNameChauVuong[position - 1];
	}
	return name;
}

int caclularChauTron(string name){
	PRICE_CHAU_TRON price;
	if(name == CHAU_TRON_50){
		price = TRON_50;
	}else if(name == CHAU_TRON_60){
		price = TRON_60;
	}else if(name == CHAU_TRON_70){
		price = TRON_70;
	}else if(name == CHAU_TRON_80){
		price = TRON_80;
	}else if(name == CHAU_TRON_90){
		price = TRON_90;
	}else if(name == CHAU_TRON_100){
		price = TRON_100;
	};
	return price;
};
int caclularChauLucLang(string name){
	PRICE_CHAU_LUC_LANG price;
	if(name == CHAU_LUC_LANG_50){
		price = LUC_LANG_50;
	}else if(name == CHAU_LUC_LANG_60){
		price = LUC_LANG_60;
	}else if(name == CHAU_LUC_LANG_70){
		price = LUC_LANG_70;
	}else if(name == CHAU_LUC_LANG_80){
		price = LUC_LANG_80;
	}else if(name == CHAU_LUC_LANG_90){
		price = LUC_LANG_90;
	}else if(name == CHAU_LUC_LANG_100){
		price = LUC_LANG_100;
	};
	return price;
};
int caclularChauVuong(string name){
	PRICE_CHAU_VUONG price;
	if(name == CHAU_VUONG_50){
		price = VUONG_50;
	}else if(name == CHAU_VUONG_60){
		price = VUONG_60;
	}else if(name == CHAU_VUONG_70){
		price = VUONG_70;
	}else if(name == CHAU_VUONG_80){
		price = VUONG_80;
	}else if(name == CHAU_VUONG_90){
		price = VUONG_90;
	}else if(name == CHAU_VUONG_100){
		price = VUONG_100;
	};
	return price;
};

// Caculation
int caculation(string type, string name, short quantity){
	int total;
	
	if(type == CHAU_TRON){
		total = caclularChauTron(name) * quantity;
	}else if(type == CHAU_LUC_LANG){
		total = caclularChauLucLang(name) * quantity;
	}else if(type == CHAU_VUONG){
		total = caclularChauVuong(name) * quantity;
	};

	return total;
}