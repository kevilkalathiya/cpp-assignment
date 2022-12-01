#include<iostream>
using namespace std;

int number(int n)
{	
  if(n==1)
  return 1;

  int smallproblem=number(n-1);
  int bigproblem=n+smallproblem;
  
  return bigproblem;
  
}

int main()
{
	int n;
	cout<<"enter the number : ";
	cin>>n;
	cout<<"sum is : "<<number(n);
	return 0;
}