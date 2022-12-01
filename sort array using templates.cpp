#include<iostream>
using namespace std;

template<typename xyz>

xyz sort_array(xyz array)
{
    int x,j,temp;
    
    cout<<endl<<"after the sorting array elements : "<<endl;
	for(x=0;x<5;x++)
	{
		for(j=x+1;j<5;j++)
		{
			if(array[x]>array[j])
			{
				temp=array[x];
				array[x]=array[j];
				array[j]=temp;
			}
		}
		cout<<array[x]<<" ";
	
	}

}

int main()
{
	int array[5],x;
	
	cout<<"enter the array elements : "<<endl;
	for(x=0;x<5;x++)
	{
	cin>>array[x];
	}

	sort_array(array);
	return 0;
}