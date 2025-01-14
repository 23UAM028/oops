#include<iostream>
using namespace std;
int main()
{
	int i, number;
	cout<<"Enter a number: ";
	cin>>number;	
	
	cout<<"multiplication table of "<<number<<"is:";
	
	for(i=0;i<=10;i++)
	{
		cout<<number<<"X"<<i<<"="<<number*i<<endl;
	}
}
