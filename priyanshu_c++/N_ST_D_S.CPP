#include<iostream.h>
#include<conio.h>
class sya
{
	public:
		int a;
		static void fun()
		{
			sya obj_cls;
			obj_cls.a=10;
			cout<<"\nvalue of a="<<obj_cls.a;
		}
};
void main()
{
	clrscr();
	sya obj,obj1;
	obj.fun();
	cout<<"\n\n";
	obj1.fun();
	getch();
}