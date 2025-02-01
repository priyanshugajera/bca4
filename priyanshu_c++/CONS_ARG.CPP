#include<iostream.h>
#include<conio.h>
void fun(const int a)
{
       //a+=10 is not modify for const value;
       cout<<a;
}

void main()
{

	clrscr();
	fun(10);
	getch();
}