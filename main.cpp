#include <iostream>
#include <vector>
#include "getInfoController.h"


void showListProduct();
void showListCustomer();
int main(int argc, char const *argv[])
{
	short typeOfProduct;
	short Customer;
	std::string productName = getProductName();

	std::cout << "====================================================" << std::endl;
	std::cout << "=====================Xin Chào=======================" << std::endl;
	std::cout << "====================================================" << std::endl;

	
	while(1){
		std::cout << "\n=======  Hãy chọn khách hàng mua chậu  =========\n";
		showListCustomer();
		std::cin >> Customer;
		if(Customer == 3){
			std::cout << EXIT;
			break;
		}else if(Customer <= 0 || Customer > 3){
			std::cout << CHOICE_AGAIN;
		}
		else{
			std::string custName = getCustomer(Customer);
			std::cout << "============ Khách hàng mua chậu là: " << custName << " =============\n";

			while(1){
				std::cout << "\n================= Chọn loại chậu ==========================\n";
				showListProduct();
				std::cin >> typeOfProduct;
				if(typeOfProduct == 4) {
					std::cout << EXIT;
					break;
				}else if(typeOfProduct <= 0 || typeOfProduct > 4){
					std::cout << CHOICE_AGAIN;
				}
				else{
					std::string typeProduct;
					typeProduct = getTypeOfProduct(typeOfProduct);
					std::cout << "================ Bạn đã chọn " << typeProduct << " ==============\n";

				}
			
			}
		}
	}


	
	return 0;
}

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