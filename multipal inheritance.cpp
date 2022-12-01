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

class b
{
      public: 
      void getb()
      {
        cout<<"class b"<<endl;
      }     
           
           
};

class c:public a,public b
{    public: 
      void getc()
      {
        cout<<"class c"<<endl;
      }

};

int main()
{
       c obj;
       obj.geta();
       obj.getb();
       obj.getc();
}