#include<iostream>
using namespace std;

int countnumber(int n)
{
	static int count=0;
	if(n!=0)
	{
	count++;
	n=n/10;
	countnumber(n);
    }
	return count;
}

int main()
{
	int n;
	cout<<"enter the number : ";
	cin>>n;
	cout<<"count number : "<<countnumber(n);
	return 0;
}