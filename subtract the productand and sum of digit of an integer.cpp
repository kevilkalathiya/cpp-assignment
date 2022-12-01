#include<iostream>
using namespace std;

int main()
{
	
    int n, product=1 , sum=0 , answer;
    cout<<"enter the digit : ";
    cin>>n;
    
    while(n!=0)
    {
    	int digit = n % 10;
    	product = product * digit;
    	sum = sum + digit;
    	n = n / 10;
	}
	
    answer=product-sum;
    cout<<answer;
}