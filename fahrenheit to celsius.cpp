#include<iostream>
using namespace std;

int main()
{
	float fahrenheit,celsius;
	cout<<"enter the fahrenheit : ";
	cin>>fahrenheit;
	
	celsius=(fahrenheit-32)*(5.0/9);
	
	cout<<celsius<<"C";
	
	return 0;
}