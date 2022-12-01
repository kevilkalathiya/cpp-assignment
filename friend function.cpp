#include<iostream>
using namespace std;


class bhagesh
{
    int money=500;
    
    friend int kevil(bhagesh k);
    friend int jenish (bhagesh j);
    
};

 int kevil(bhagesh k)
{
	int value;
	cout<<"enter the money : ";
	cin>>value;
	if(k.money>=value&&value<=300)
	{
		cout<<"kevil : "<<value<<endl;	
	}
	else
	{
		cout<<"i have not "<<value<<" rupees."<<endl;
	}

}

int jenish (bhagesh j)
{
	int value;
	cout<<"enter the money : ";
	cin>>value;
	if(j.money>=value&&value<=200)
	{
		cout<<"jenish : "<<value<<endl;	
	}
	else
	{
		cout<<"i have not "<<value<<" rupees."<<endl;
	}
}

int main()
{
	bhagesh b;
	kevil(b);
	jenish(b);
}