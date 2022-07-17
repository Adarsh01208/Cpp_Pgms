
// find the area of cicrcle
#include <iostream>
using namespace std;
//#define pi 3.14
int main() {
    float num1 ,num2;
    char op;
    cout<<"enter an arithemetic operator (+ - * /)\n";
    cin>>op;
    cout<<"enter the two numbers as operands \n";
    cin>>num1>>num2;
    
    switch(op) {
    	case '+':
    	cout<< num1 <<"+"<<num2<<"="<<num1+num2;
        break;
    	case '-':
    	cout<< num1 <<"-"<<num2<<"="<<num1-num2;
    	break;
     	case '*':
    	cout<< num1 <<"*"<<num2<<"="<<num1*num2;
    	break;
    	case '/':
    	cout<< num1 <<"/"<<num2<<"="<<num1/num2;
    	break;
    	default:
    	cout<< "no operand found";
	}
	return 0;
}
