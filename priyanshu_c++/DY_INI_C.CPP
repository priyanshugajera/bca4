#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public:
	demo()
	{
		a=0;
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
	int u;
	cout<<"enter value of u=";
	cin<<u;
	d.fun();
	d=demo(u);
	d.fun();
	getch();
	return 0;
}