#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public:
	demo()
	{
		a=o;
	}
	demo(int x)
	{
		a=x;
	}
	void fun()
	{
		cout<<endl<<"a is="<<a;
	}
};
main()
{
	clrscr();
	demo d;
	d.fun();
	d=demo(10);
	d.fun();
	getch();
	return 0;
}