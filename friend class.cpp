#include<iostream>
using namespace std;


class kevil
{
	int money=500;
	friend class dev;
};
 
class jenish
{
    int money=2000;
	friend class dev;   
};

class dev
{
	public:
		void gatmoney(kevil ob,jenish ob1)
		{
			cout<<"total money : "<<ob.money+ob1.money;
		}
	
};

int main()
{
   kevil k;
   jenish j;
   dev d;
   d.gatmoney(k,j);
	
}