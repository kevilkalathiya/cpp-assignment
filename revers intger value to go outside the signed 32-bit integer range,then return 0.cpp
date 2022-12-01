#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x;
	cin>>x;
	
	long long int answer = 0;
	while(x!=0)
	{
		int lastdigit= x%10;
		answer=answer*10+ lastdigit;
		if(answer>INT_MAX || answer<INT_MIN)
		{
			return 0;
		}
		x=x/10;
		
	}
	    answer=x<0?-answer : answer;
		cout<<answer;
}

