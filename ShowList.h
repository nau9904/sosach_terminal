#ifndef SHOWLIST_H
#define SHOWLIST_H
#include <string>

static std::string listNameChauTron[] = {
    "Chậu tròn 50",
    "Chậu tròn 60",
    "Chậu tròn 70",
    "Chậu tròn 80",
    "Chậu tròn 90",
    "Chậu tròn 100",
};
static std::string listNameChauLucLang[] = {
    "Chậu Lục Lăng 50",
    "Chậu Lục Lăng 60",
    "Chậu Lục Lăng 70",
    "Chậu Lục Lăng 80",
    "Chậu Lục Lăng 90",
    "Chậu Lục Lăng 100",
};
static std::string listNameChauVuong[] = {
    "Chậu Vuông 50",
    "Chậu Vuông 60",
    "Chậu Vuông 70",
    "Chậu Vuông 80",
    "Chậu Vuông 90",
    "Chậu Vuông 100",
};
void showListProduct();
void showListCustomer();
void showListChau(std::string);
void listChauTron();
void listChauLucLang();
void listChauVuong();

#endif