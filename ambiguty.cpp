#include<iostream>
using namespace std;

class a
{
	public:
		
		int gata()
		{
			cout<<"class a"<<endl;
		}
};

class b:virtual public a
{
	public:
		
		int gatb()
		{
			cout<<"class b"<<endl;
		}
};

class c:virtual public a
{
	public:
		
		int gatc()
		{
			cout<<"class c"<<endl;
		}
};

class d:public b,public c
{
	public:
		
		int gatd()
		{
			cout<<"class d"<<endl;
		}
};

int main()
{
	d obj;
	obj.gata();
	obj.gatb();
	obj.gatc();
	obj.gatd();
}
