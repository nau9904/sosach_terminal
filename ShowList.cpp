#include "ShowList.h"
#include "getInfoController.h"
#include <vector>
#include <iostream>

void showListProduct(){
	std::vector<std::string> listProductVector;
	listProductVector.push_back(CHAU_TRON);
	listProductVector.push_back(CHAU_LUC_LANG);
	listProductVector.push_back(CHAU_VUONG);

	for(int i = 0; i < listProductVector.size();i++){
		std::cout <<"\t" << i+1 << " - ";
		std::cout << listProductVector[i] << std::endl;
	}
	std::cout << "\t" << "4 - " << "Thoát" << endl;
}

void showListCustomer(){
	std::cout << "\t1 - " << CUST_TUEANH << std::endl;
	std::cout << "\t2 - " << CUST_OTHER << std::endl;
	std::cout << "\t3 - " << "Thoát" << endl;
}

void showListChauTron(){
    std::cout << "\t1 - " << CHAU_TRON_50 << std::endl;
	std::cout << "\t2 - " << CHAU_TRON_60 << std::endl;
	std::cout << "\t3 - " << CHAU_TRON_70 << std::endl;
	std::cout << "\t4 - " << CHAU_TRON_80 << std::endl;
	std::cout << "\t5 - " << CHAU_TRON_90 << std::endl;
	std::cout << "\t6 - " << CHAU_TRON_100 << std::endl;
	std::cout << "\t7 - " << "Thoát" << endl;
}