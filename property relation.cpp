#include<iostream>
using namespace std;

class father
{
    protected:
    int property=100;
    int money=100;  
    
    int motherproperty=property;
   	int mothermoney=money-40;	
   
    public:
    void father_wealth()
    {
    	cout<<"FATHER WEALTH"<<endl;
    	cout<<"father property : "<<property<<endl<<"father money : "<<money<<endl<<endl;
	}
   
    
};

class mother:public father
{
    protected:
   	
   	int sonproperty=motherproperty-60;
   	
   	int daughterproperty=motherproperty-40;
   	int daughtermoney=mothermoney-50;

    public:
    void mother_wealth()
    {
    	cout<<"MOTHER WEALTH"<<endl;
    	cout<<"mother property : "<<motherproperty<<endl<<"mother money : "<<mothermoney<<endl<<endl;
	}

};

class son:public mother
{
	public:
    void son_wealth()
    {
    	cout<<"SON WEALTH"<<endl;
    	cout<<"son property : "<<sonproperty<<endl<<endl;
	}

};

class daughter:public mother
{
	public:
    void daughter_wealth()
    {
    	cout<<"DAUGHTER WEALTH"<<endl;
    	cout<<"daughter property : "<<daughterproperty<<endl<<"daughter money : "<<daughtermoney<<endl<<endl;
	}
  
};

int main()
{
   son obj;
   obj.father_wealth();
   obj.mother_wealth();
   obj.son_wealth();
   
   daughter ob;
//   ob.father_wealth();
//   ob.mother_wealth();
   ob.daughter_wealth();
}
