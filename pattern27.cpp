#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n)
	{
		int col=1,count=1;
		while(col<=n-row+1)
		{
			cout<<count++<<" ";
			col++;
		}
		
		while(col<=n)
		{
			cout<<"*"<<" ";
			col++;
		}
		
		int star=row-1;
		while(star)
		{
			cout<<"*"<<" ";
			star--;
		}
		
		int num=1,value=n-row+1;
		while(num<=n-row+1)
		{
			cout<<value--<<" ";
			num++;
		}
		
		cout<<endl;
		row++;
	}
}