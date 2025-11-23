/**
 * @file app-cal.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-11-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

int add(int a,int b);
int substract(int a,int b);

int main(){
     char op;
     int number_1,number_2;
     cin >> number_1 >>op>>number_1;
     if(op=='+'){
     add(number_1,number_2);
}

     else if(op=='-'){
     substract(number_1,number_2);
     }


     return 0;

}
