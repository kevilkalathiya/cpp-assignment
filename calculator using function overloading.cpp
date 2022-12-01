#include<iostream>
using namespace std;

class calculator
{
	public:
	void a(int x,int y)
	{
		cout<<"sum : "<<x+y<<endl;
	}
	
	void a(int x,double y)
	{
		cout<<"subtraction : "<<x-y<<endl;
	}
	
	void a(double x,int y)
	{
		cout<<"multiplication : "<<x*y<<endl;
	}
	
	void a(double x,double y)
	{
		cout<<"division : "<<x/y<<endl;
	}

};

int main()
{
    calculator c;
    c.a(2,2);
    c.a(4,2.0);
    c.a(2.0,3);
    c.a(6.0,2.0);
	return 0;
}