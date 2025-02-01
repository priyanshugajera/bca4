#include<iostream.h>
#include<conio.h>
void fun(int a)
{
       cout<<a<<endl;
}
void fun(int a,int b)
{
       cout<<a<<","<<b<<endl;
}
void fun(int a, int b, int c)
{
       cout<<a<<","<<b<<","<<c;
}
void main()
{
	clrscr();
	fun(10);
	fun(1,2);
	fun(1,2,3);
	getch();

}