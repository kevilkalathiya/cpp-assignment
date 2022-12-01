#include<iostream>
using namespace std;

int main()
{

	int n,reminder,reverse=0;
	cout<<"enter number : ";
	cin>>n;
	
	while(n!=0)
    {
    	reminder=n%10;
    	if((reverse>INT_MAX/10)||(reverse<INT_MIN/10))
    	{ 
    		cout<<"0"<<endl;
    		return 0;
		}    	      	
         reverse=reverse*10+reminder;
    	n=n/10;
	}
	
	cout<<"revers number is : "<<reverse;
}