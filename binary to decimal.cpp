#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	int n,i=0,ans=0;
	cout<<"enter binary number : ";
	cin>>n;
	
	while(n!=0)
	{
		int reminder=n%10;
		if(reminder==1)
		{
			 ans=ans+pow(2,i);
		}
		n=n/10;
		i++;
	}
	
	cout<<"decimal number is : "<<ans;
	return 0;
}