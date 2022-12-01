#include<iostream>
using namespace std;

inline int cubic(int a)
{
	return a*a*a;
}

int main()
{
	int a=2;
	cout<<"cube is : "<<cubic(a);
	return 0;
}