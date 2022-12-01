#include<iostream>
using namespace std;

class s
{
	int num1,num2;
	public:
		s()
		{
			cout<<"enter the first number :";
			cin>>num1;
			cout<<"enter the second number :";
			cin>>num2;
			cout<<"subtraction : "<<num1-num2;
		}
};

int main()
{
	s obj;
	return 0;
}