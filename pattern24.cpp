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
		
		int col=1,value=row;
		while(col<=n-row+1)
		{
			cout<<value++;
			col++;
		}
		cout<<endl;
		row++;
	}
}