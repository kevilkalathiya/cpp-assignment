#include<iostream>
using namespace std;

template <typename xyz>

xyz  swap(xyz a,xyz b)
{
	cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
	
	//a=10 , b=20
	a=a+b;//a=10+20=30
	b=a-b;//b=30-20=10
	a=a-b;//a=30-10=20
	//a=20 ,b=10
	
	cout<<endl<<"after swaping number : "<<endl;
	cout<<"a : "<<a<<endl<<"b : "<<b;
	
}

int main()
{
	swap(10,20);
}