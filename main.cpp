#include <iostream>

#include "getInfoController.h"
#include "ChauPriceController.h"
#include "ShowList.h"

class Bill {
	private:
		std::string custName;
		std::string productName;
		short quantity;
		unsigned totalPrice;
	public:
		Bill(std::string cn, std::string pn, short q, unsigned ttp): 
			custName(cn),
			productName(pn),
			quantity(q),
			totalPrice(ttp) {}

	void makeBill(){
		std::string bill;
		bill = "   Khách hàng: " + custName + "\n" 
				+ "   Loại chậu: " + productName + "\n" 
				+ "   Số lượng: " + to_string(quantity) + "\n" 
				+ "   Tổng giá: " + to_string(totalPrice) + "\n";
		std::cout << bill;
	}
};


int main(int argc, char const *argv[])
{
	bool flag;
	short typeOfProduct;
	short Customer;
	short nameOfProduct;
	short quantity;
	

	std::cout << "==========================================================" << std::endl;
	std::cout << "========================Xin Chào==========================" << std::endl;
	std::cout << "==========================================================" << std::endl;

	
	while(1){
		flag = true;
		std::cout << CHOICE_CUSTOMER;
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

			while(flag){
				std::cout << CHOICE_PRODUCT;
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
					std::cout << "=================== Bạn đã chọn " << typeProduct << " ================\n";
					
					while(flag){
						std::cout << CHOICE_PRODUCT_NAME;
						showListChau(typeProduct);
						std::cin >> nameOfProduct;
						if(nameOfProduct == 7){
							std::cout << EXIT;
							break;
						}else if(nameOfProduct <= 0 || nameOfProduct > 7){
							std::cout << CHOICE_AGAIN;
						}else{
							std::string name;
							name = getProductName(typeProduct, nameOfProduct);
							std::cout << "=================== Bạn đã chọn " << name << " ================\n";
							std::cout << ENTER_QUANTITY;
							std::cin >> quantity;
							int total = caculation(typeProduct, name, quantity);
			
							Bill bill(custName, name, quantity, total);
							bill.makeBill();

							//Clear Bill
							Customer = 0;
							typeOfProduct = 0;
							nameOfProduct = 0;
							quantity = 0;

							std::cout << MAKE_BILL_SUCCESS << std::endl;
							flag = false;
							break;
						}
					}

				}
			
			}
		}
	}
	
	return 0;
}

