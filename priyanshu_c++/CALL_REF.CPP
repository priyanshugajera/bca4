#include<iostream.h>
#include<conio.h>
void f(int *p,int b)
{

	cout<<"address p="<<p<<endl;
	cout<<"value of b="<<b<<endl;
	*p+=10;
	b+=100;
	cout<<"value of a using p in fun="<<*p<<endl;
	cout<<"value of b in fun="<<b<<endl;
}
int main()
{
	int a=10,b=110;
	clrscr();
	cout<<"hello BCA"<<endl;
	f(&a,b);
	cout<<"main a="<<a<<endl;
	cout<<"main b="<<b;
	getch();
	return 0;
}