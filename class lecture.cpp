#include<iostream>
using namespace std;

class lecture
{
	string name_of_lecture;
	string subject;
	string course;
	int number_of_lecture;
	
	public:
	void gat()
	{
		cout<<"enter name of lecture : ";
		cin>>name_of_lecture;
		cout<<"enter subject name : ";
		cin>>subject;
		cout<<"enter course name : ";
		cin>>course;
		cout<<"enter number of lecture : ";
		cin>>number_of_lecture;
	}
	
	void display()
	{
		cout<<endl<<"name of lecture : "<<name_of_lecture<<endl;
		cout<<"name of subject : "<<subject<<endl;
		cout<<"name of course : "<<course<<endl;
		cout<<"number of lecture : "<<number_of_lecture;
	}
};

int main()
{
	lecture obj;
	obj.gat();
	obj.display();
	return 0;
}