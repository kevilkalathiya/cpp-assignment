#include<iostream>
using namespace std;

class a
{
	public:
		void geta()
		{
			cout<<"class a"<<endl;
		}
};

class b:public a
{
	public:
		void getb()
		{
			cout<<"class b"<<endl;
		}
};

int main()
{
	b obj;
	obj.geta();
	obj.getb();
	
	return 0;
}