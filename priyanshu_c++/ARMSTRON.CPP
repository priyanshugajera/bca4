#include<iostream.h>
#include<conio.h>
void main()
{
	int a,num=0,sum=0,b=0;
	clrscr();
	cout<<"Enter a value=";
	cin>>a;
	b=a;
	while(a>0)
	{
		num=a%10;
		a=a/10;
		sum+=num*num*num;
	}
	if(b==sum)
	{
		cout<<"this is armstrong number";
	}
	else
	{
		cout<<"not armstrong";
	}
	getch();
}
