#include<iostream.h>
#include<conio.h>
class demo
{
	public:
		int a;
		int b;
		void fun() const
		{
			int c=9;
			//a=9; is not possible because const value reassigned not allowed
			cout<<endl<<c<<endl<<a;
		}
};
main()
{
	clrscr();
	demo d,o;
	d.a=90;
	d.fun();
	d.a=78;
	d.fun();
	getch();
	return 0;
}