#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n)
	{
		int space=row-1;
		while(space)
		{
			cout<<" ";
			space--;
		}
		
		int col=1;          //col=row;
		while(col<=n-row+1) //col<=n
		{
			cout<<"*";
			col++;
		}
		cout<<endl;
		row++;
	}
}