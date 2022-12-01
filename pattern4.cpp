#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int row=n;//row=1
	while(row>=1)//(row<=n)
	{
		int col=n;//col=1
		while(col>=1)//(col<=n)
		{
			cout<<col;//n-col+1
			col--;//col++
		}
		cout<<endl;
		row--;//row++
	}
}