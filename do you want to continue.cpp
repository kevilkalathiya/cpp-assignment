#include<iostream>
using namespace std;

int main()
{
	string ch;
	do
{

        int num1,num2;
        
		cout<<"enter the first number : ";
		cin>>num1;
		
		cout<<"enter the second number : ";
		cin>>num2;
		
		cout<<"multiplication : "<<num1*num2<<endl<<endl;
		
		cout<<"do you want to continue yes or no : ";
		cin>>ch;
		
	}
	while(ch=="yes");
	return 0;
	
}