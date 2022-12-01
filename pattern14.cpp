#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n)
	{
		int col=1;
	    char value='A'+row-1;
		while(col<=n)
		{	                    // char value='A'+row+col-2;
			cout<<value++<<" "; // cout<<value;
			col++;
		}
		cout<<endl;
		row++;
	}
}