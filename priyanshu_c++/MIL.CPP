#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public:

	demo(int x):a(x+100)
	{
		//here,a(x+100) is same as a=x;
	}
	void fun()
	{
		cout<<endl<<a;
	}

};
main()
{
	clrscr();
	demo d(10);
	d.fun();
	getch();
	return 0;
}
