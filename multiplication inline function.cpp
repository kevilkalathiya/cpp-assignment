#include<iostream>
using namespace std;

inline int multiplication(int a,int b)
{
	return a*b;
}

int main()
{
	int a=11,b=9;
	cout<<"multiplication : "<<multiplication(a,b);
	return 0;
}