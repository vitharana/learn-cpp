#include<iostream>


// variable = (condition) ? expressionTrue : expressionFalse;

int main(){
    int marks = 56;
    bool pass = (marks > 50) ? true : false ;
    std::cout<<"pass " << pass << std::endl;
    return 0;
}