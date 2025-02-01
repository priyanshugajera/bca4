#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public://access specifier
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
	demo(demo &obj)//copy constructor
	{
		a=obj.a;
	}
	void fun()
	{
		cout<<"\nhello sya"<<a;
	}

};
void main()
{
	clrscr();
	demo d(10),d1(d); //here, d1(d) is copy constructor
	d.fun();
	d1.fun();
	getch();
}
