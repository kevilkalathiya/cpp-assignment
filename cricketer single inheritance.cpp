#include<iostream>
using namespace std;

class cricketer
{
	protected:
     float total_runs;
	 float average_runs;
	 string best_performance;
		 	
};

class batsman :public cricketer
{
	public:
	 void gat()
	 {
	 	cout<<"enter total run : "; // there are runs of twenty overs.
	 	cin>>total_runs;
	 	cout<<"enter best performance : ";
	 	cin>>best_performance;
	 }
	 
    void average()
    {
    	average_runs=total_runs/20; // since there are 20 over here, the runs have to be divided by 20.
	}
	
	void display()
	{
		cout<<endl<<"total runs : "<<total_runs<<endl;
		cout<<"average runs : "<<average_runs<<endl;
		cout<<"best performance : "<<best_performance<<endl;
	}
};
int main()
{
	batsman obj;
    obj.gat();
    obj.average();
    obj.display();
	return 0;
}
