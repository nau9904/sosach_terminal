#ifndef GETINFOCONTROLLER_H
#define GETINFOCONTROLLER_H
#include <string>
using namespace std;

// Type of product
#define CHAU_TRON           "Chậu Tròn"
#define CHAU_LUC_LANG       "Chậu Lục Lăng"
#define CHAU_VUONG          "Chậu Vuông"
// Type of Customer
#define CUST_TUEANH     "Tuệ Anh"
#define CUST_OTHER      "Khác"


// Define name of CHAU_TRON
#define CHAU_TRON_50     "Chậu tròn 50"
#define CHAU_TRON_60     "Chậu tròn 60"
#define CHAU_TRON_70     "Chậu tròn 70"
#define CHAU_TRON_80     "Chậu tròn 80"
#define CHAU_TRON_90     "Chậu tròn 90"
#define CHAU_TRON_100    "Chậu tròn 100"


//Define name of CHAU_LUC_LANG
#define CHAU_LUC_LANG_50     "Chậu Lục Lăng 50"
#define CHAU_LUC_LANG_60     "Chậu Lục Lăng 60"
#define CHAU_LUC_LANG_70     "Chậu Lục Lăng 70"
#define CHAU_LUC_LANG_80     "Chậu Lục Lăng 80"
#define CHAU_LUC_LANG_90     "Chậu Lục Lăng 90"
#define CHAU_LUC_LANG_100    "Chậu Lục Lăng 100"

// Define name of CHAU_VUONG
#define CHAU_VUONG_50     "Chậu Vuông 50"
#define CHAU_VUONG_60     "Chậu Vuông 60"
#define CHAU_VUONG_70     "Chậu Vuông 70"
#define CHAU_VUONG_80     "Chậu Vuông 80"
#define CHAU_VUONG_90     "Chậu Vuông 90"
#define CHAU_VUONG_100    "Chậu Vuông 100"


// Define Message
#define CHOICE_PRODUCT           "\n=================== Chọn loại chậu =======================\n"
#define CHOICE_PRODUCT_NAME      "\n=================== Chọn tên chậu  =======================\n"
#define CHOICE_CUSTOMER          "\n============= Hãy chọn khách hàng mua chậu ===============\n"
#define EXIT                     "==================== Xác nhận thoát ======================\n"
#define CHOICE_AGAIN             "===================== Vui lòng chọn đúng ===================\n"
#define ENTER_QUANTITY           "======================= Nhập số lượng ======================\n"
#define MAKE_BILL_SUCCESS        "\n==========================================================\n=================== Hoàn Thành Hóa Đơn ===================\n==========================================================\n"


// get type of product
string getTypeOfProduct(short);
// get product name
string getProductName(std::string, short);

// get customer
string getCustomer(short);

// Caculation 
int caculation(string , string , short );

int caclularChauTron(string);
int caclularChauLucLang(string);
int caclularChauVuong(string);

#endif
