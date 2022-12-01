#include<iostream>
using namespace std;

class area
{
	public:
   void a(int a,int b)
	{
	 	int width=a;
	 	int length=b;
	 	cout<<"area of rectangle is : "<<width*length<<endl;
	}
	
  void	a(float x,float y,float z)
	{
	 	float base=x;
	 	float height=y;
	 	cout<<"area of triangle is : "<<z*base*height<<endl;
	}
	
  void a(double p,int q)
	{
	 	double pi=p;
	 	int radius=q;
	 	cout<<"area of circle is : "<<pi*radius*radius<<endl;
	}	
};

int main()
{
	area a;
    a.a(4,2);
    a.a(5,4,0.5);
    a.a(3.14,4);
	return 0;
}