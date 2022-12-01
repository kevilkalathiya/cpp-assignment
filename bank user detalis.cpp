#include<iostream>
using namespace std;


class bank
{
	public:
 	 string name;
	 string account;
	 int account_num;
	protected:
	 int balance;
		
};

class user:public bank
{
	public:
	void gat(int x)
	{
		cout<<"enter the depositer name :";
		cin>>name;
		cout<<"enter type of account : ";
		cin>>account;
		cout<<"enter the account number : ";
		cin>>account_num;
		
		balance=x;
		cout<<endl<<"name : "<<name<<endl;
		cout<<"account type : "<<account<<endl;
		cout<<"account number : "<<account_num<<endl;
		cout<<"balance : "<<balance<<endl<<endl;
		
	}
	
	void deposited()
	{
		int deposited_amount;
		cout<<"how many money deposited : ";
		cin>>deposited_amount;
		balance=balance+deposited_amount;
		cout<<"after depositing balance : "<<balance<<endl<<endl;
		
	}
	
	void withdraw()
	{
		int withdraw_amount;
		cout<<"how many money withdraw : ";
		cin>>withdraw_amount;
	    cout<<"after withdraw balance : "<<balance-withdraw_amount;
	}
	
};
int main()
{
	user obj;
	obj.gat(50000);
	obj.deposited();
	obj.withdraw();
	
	return 0;
}