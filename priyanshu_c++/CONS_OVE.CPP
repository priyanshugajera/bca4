#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public:
	demo()
	{
		a=0;
		cout<<"\nwelcome";
	}
	demo(int x)
	{
		a=x;
		cout<<"\ncons";
	}
	void fun()
	{
		cout<<"\nhello sya"<<a;
	}
};
void main()
{
	clrscr();
	demo d(10),d1;
	d.fun();
	d1.fun();
	getch();
}
