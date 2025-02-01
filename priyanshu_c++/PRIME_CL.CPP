#include<iostream.h>
#include<conio.h>
class prime
{
	private://access specifier
		int num;
		void fun(int);
	public://access specifier
		void demo()
		{
			cout<<"Enter a number=";
			cin>>num;
			fun(num);
		}
};
void prime::fun(int num)
{
	int a,count=0;
	for(a=1;a<=num;a++)
	{
		if(num%a==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"this is a prime number";
	}
	else
	{
		cout<<"not prime number";
	}
}
void main()
{
	clrscr();
	prime obj;
	obj.demo();
	getch();
}