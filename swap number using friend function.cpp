#include<iostream>
using namespace std;

class number
{
	int a=10;
	int b=20;
	
	friend void swap_number(number obj);
	
};

void swap_number(number obj)
{
	obj.a=obj.a+obj.b;//10+20=30  
	obj.b=obj.a-obj.b;//30-20=10
	obj.a=obj.a-obj.b;//30-10=20
	
	cout<<"a : "<<obj.a<<endl<<"b : "<<obj.b;
}

int main()
{
    number obj;
    swap_number(obj);
	return 0;
}