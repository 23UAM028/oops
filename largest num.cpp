#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter three number: ";
	cin>>num1>>num2>>num3;
	
	if(num1>=num2&&num1>=num3)
	{
		if(num1==num2||num1==num3)
		{
			cout<<"their is tai for the largest number: "<<num1;
				
		}
		else
		{
			cout<<"The latrgest num is: "<<num1;
		}
	}
	else if(num2>=num1&&num2>=num3)
	{
		if(num2==num1||num2==num3)
		{
			cout<<"their is tai for the largest number: "<<num2;
				
		}
		else 
		{
			cout<<"The latrgest num is: "<<num2;
		}
		
   }
		else
		{
			cout<<"largest num is: "<<num3;
		}

		
}
