#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<setw(79)<<"SIMPLE CALCULATOR"<<endl;
	while(true){
	char operation;
	cout<<"Enter + for addition, - for subtraction, * for multiplication and / for division , S to stop";
	cin>>operation;
	if (operation=='S'){
		break;}
	else{float num1,num2;
	if(operation=='+'||operation=='-'||operation=='*'||operation=='/'){
	cout<<"Enter two numbers:";
	cin>>num1>>num2;}
	switch(operation){
		case '+':
			cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
			break;
		case '-':
			cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
			break;
		case '*':
			cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
			break;
		case '/':
			if(num2==0){
				cout<<"Division by zero is not allowed"<<endl;}
				else{
					cout<<"Division of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
				}
			break;
		default:
			cout<<"Invalid operation selected"<<endl;
			break;
	}}}
	return 0;}
