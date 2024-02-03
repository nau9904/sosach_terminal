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

void listChauTron(){

	for(int i = 0; i < sizeof(listNameChauTron)/sizeof(listNameChauTron[0]); i++){
		std::cout << "\t" + to_string(i + 1) + "- " << listNameChauTron[i] << std::endl;
	}
}
void listChauLucLang(){
	for(int i = 0; i < sizeof(listNameChauLucLang)/sizeof(listNameChauLucLang[0]); i++){
		std::cout << "\t" + to_string(i + 1) + "- " << listNameChauLucLang[i] << std::endl;
	}
}
void listChauVuong(){
	for(int i = 0; i < sizeof(listNameChauVuong)/sizeof(listNameChauVuong[0]); i++){
		std::cout << "\t" + to_string(i + 1) + "- " << listNameChauVuong[i] << std::endl;
	}
}


void showListChau(string type){
	if(type == CHAU_TRON){
		listChauTron();
	}else if(type == CHAU_LUC_LANG){
		listChauLucLang();
	}else if(type == CHAU_VUONG){
		listChauVuong();
	}
	std::cout << "\t7 - " << "Thoát" << endl;
}