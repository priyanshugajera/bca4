#include<iostream.h>
#include<conio.h>
void main()
{
	int num1=0,num2=1,sum,a,want=0;
	clrscr();

	cout<<"enter a number you want get fibonaaci series=";
	cin>>want;
	cout<<num1<<" ";
	cout<<num2<<" ";
	for(a=1;a<want;a++)
	{
		sum=num1+num2;
		cout<<sum<<" ";
		num1=num2;
		num2=sum;
	}
	getch();
}