#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int a;
	demo(int a)
	{
		this->a=a;
	}
	void fun()
	{
		cout<<"a is="<<a;
	}
};
void main()
{
	demo obj=10;
	clrscr();
	obj.fun();
	getch();
}