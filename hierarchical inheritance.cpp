#include<iostream>
using namespace std;

class a
{
	public:
		void gata()
		{
			cout<<"class a"<<endl;
		}
};

class b:public a
{
		public:
		void gatb()
		{
			cout<<"class b"<<endl;
		}
};

class c:public a
{
		public:
		void gatc()
		{
			cout<<"class c"<<endl;
		}
};

class d:public b
{
		public:
		void gatd()
		{
			cout<<"class d"<<endl;
		}
};

class e:public b
{
		public:
		void gate()
		{
			cout<<"class e"<<endl;
		}
};

class f:public c
{
		public:
		void gatf()
		{
			cout<<"class f"<<endl;
		}
};

class g:public c
{
		public:
		void gatg()
		{
			cout<<"class g"<<endl;
		}
};

int main()
{
	d obj1;
	obj1.gata();
	obj1.gatb();
	obj1.gatd();
	
	e obj2;
	obj2.gata();
	obj2.gatb();
	obj2.gate();
	
	f obj3;
	obj3.gata();
	obj3.gatc();
	obj3.gatf();
	
	g obj4;
	obj4.gata();
	obj4.gatc();
	obj4.gatg();
	
	return 0;
}