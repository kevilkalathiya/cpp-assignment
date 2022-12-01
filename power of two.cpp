#include<iostream>
using namespace std;


int main()
{
	int n,ans=1	;
	cout<<"enter number : ";
	cin>>n;
	
	for(int i=0;i<=30;i++)
	{	
			if(ans==n)
			{
				cout<<"it is a power of two";
				return 0;
			}
			
		if(ans<INT_MAX/2)
		{
			ans=ans*2;
		}
	}
	cout<<"not power of two";
}