#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public:
		int b;
		void fun(int x)
		{
			a=x;
			cout<<"\nfun()"<<b<<" "<<a;
		}
		friend void show(demo);
		friend void abc();
};
void show(demo obj)
{
	cout<<"\nshow()"<<endl<<obj.b;
	cout<<"\nvalue of a"<<obj.a;
}
void abc()
{
	demo xyz;
	cout<<"\nabc()\n";
	cout<<xyz.a<<endl<<xyz.b;
}
main()
{
	clrscr();
	demo d;
	d.b=100;
	d.fun(10);
	show(d);
	abc();
	getch();
	return 0;
}
