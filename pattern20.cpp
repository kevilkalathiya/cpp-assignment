#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int row=1;   //n
	while(row<=n)//(row>=1)
	{
		int col=1;
		while(col<=n-row+1) //(col<=row)
		{
			cout<<"*";
			col++;
		}
		cout<<endl;
		row++;   //row--
	}
}
