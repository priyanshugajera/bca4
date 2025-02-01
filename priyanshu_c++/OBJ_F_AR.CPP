#include<iostream.h>
#include<conio.h>
class sya
{
	public:
		int a,b;
		void fun(sya obj)
		{
			cout<<"\nvalue of a="<<obj.a;
			cout<<"\nvalue of b="<<obj.b;
			obj.a++;
			obj.b++;
		}
};
void main()
{
	clrscr();
	sya meet,yug;
	yug.a=9;
	yug.b=56;
	meet.fun(yug);
	getch();
	yug.fun(meet);
	getch();

	cout<<endl<<"yug="<<yug.b;
	cout<<endl<<"meet="<<meet.a;

	cout<<endl<<meet.b;
	getch();
}