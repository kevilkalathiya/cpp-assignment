#include<iostream>
using namespace std;

class calculator
{
    public:

    int value()
    {
        int number1,number2;
        char choice;

        cout<<"enter the first number : ";
        cin>>number1;

        cout<<"enter the second number : ";
        cin>>number2;
        
        cout<<"enter your choice : ";
        cin>>choice;
        
        switch(choice)
        {
        	case '+':printf("sum=%d",number1+number2);
        	break;
        	
			case '-':printf("subtraction=%d",number1-number2);
        	break;
        		
			case '*':printf("multiplication=%d",number1*number2);
        	break;
        		
			case '/':printf("division=%d",number1/number2);
        	break;
        		
			case '%':printf("modulo=%d",number1%number2);
        	break;
        	
		}
    }
};
int main()
{
    calculator obj;
    obj.value();
    return 0;
}