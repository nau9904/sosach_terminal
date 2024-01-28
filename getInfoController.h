#include <string>
using namespace std;

// Type of product
#define CHAU_TRON       "Chậu Tròn"
#define CHAU_LUC_LANG       "Chậu Lục Lăng"
#define CHAU_VUONG       "Chậu Vuông"
// Type of Customer
#define CUST_TUEANH     "Tuệ Anh"
#define CUST_OTHER      "Khác"
extern bool CUST_TUE_ANH_BOOL;
extern bool CUST_OTHER_BOOL;

// Define name of CHAU_TRON
#define CHAU_TRON_50    "Chậu tròn 50"
#define CHAU_TRON_60    "Chậu tròn 60"
#define CHAU_TRON_70    "Chậu tròn 70"

//Define name of CHAU_LUC_LANG


// Define name of CHAU_VUONG



// Define Message
#define EXIT            "=================== Xác nhận thoát =====================\n"
#define CHOICE_AGAIN    "=================== Vui lòng chọn đúng ==================\n"


// get type of product
extern string getTypeOfProduct(short);
// get product name
extern string getProductName();

// get customer
extern string getCustomer(short);

// get quantity
extern int getQuantity();

// Caculation
extern int caculation();

