#include<iostream>
using namespace std;

class maxnum
{
	int a=33,b=51;
	
	friend void max_number(maxnum obj);
};

void max_number(maxnum obj)
{
   if(obj.a>obj.b)
   {
   	cout<<"max number is : "<<obj.a;
   }
   
   else
   {
   	cout<<"max number is : "<<obj.b;
   }	
}

int main()
{
	maxnum ob;
	max_number(ob);
	return 0;
}
