#include<iostream>
using namespace std;

class m
{
	int num1,num2;
	public:
		m()
		{
			cout<<"enter the first number :";
			cin>>num1;
			cout<<"enter the second number :";
			cin>>num2;
			cout<<"multiplication : "<<num1*num2;
		}
	
};

int main()
{
	m obj;
	return 0;
}