#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b=1,num;
	clrscr();
	cout<<"Enter a number";
	cin>>num;
	for(a=num;a>=1;a--)
	{
		b=b*a;
	}

	cout<<"Factorial="<<b;
	getch();
}
