#include<iostream>
using namespace std;

class f
{
	public:
		void getf()
		{
			cout<<"class f"<<endl;
		}
};

class b:public f
{
	public:
		void getb()
		{
			cout<<"class b"<<endl;
		}
};

class a:public b
{
	public:
		void geta()
		{
			cout<<"class a"<<endl;
		}
};

class c:public b
{
	public:
		void getc()
		{
			cout<<"class c"<<endl;
		}
};

class g
{
	public:
		void getg()
		{
			cout<<"class g"<<endl;
		}
};

class e:public f,public g
{
	public:
		void gete()
		{
			cout<<"class e"<<endl;
		}
};


int main()
{
	a obj1;
	obj1.getf();
	obj1.getb();
	obj1.geta();
	
	c obj2;
	obj2.getf();
	obj2.getb();
	obj2.getc();
	
	e obj3;
	obj3.getf();
	obj3.getg();
	obj3.gete();
	
	return 0;
}