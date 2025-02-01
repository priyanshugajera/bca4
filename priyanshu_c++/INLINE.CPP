#include<iostream.h>
#include<conio.h>
inline int demo(int a,int b)
{
	return a+b;
}
void main()
{
	int s;
	clrscr();
	s=demo(10,5);
	cout<<"sum is="<<s;
	getch();

}