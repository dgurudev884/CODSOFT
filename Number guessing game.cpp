#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int random_number=(rand()%100)+1;
	int n;
	cout<<setw(79)<<"Number guessing game"<<endl;
	cout<<"A number is guessed , now give your try to guess it\nEnter any number: ";
	cin>>n;
	if(n==random_number){
		cout<<"Great! Guessed the number in just one attempt"<<endl;}
		else{
			while(true){
				if(n>random_number){
					cout<<"Your Guess was too high. Try again"<<endl;
					cin>>n;}
				else if(n<random_number){
					cout<<"Your guess was too low. Try again"<<endl;
					cin>>n;}
				else{
					cout<<"Finally you have guessed it!"<<endl;
					break;}}}
					return 0;}
