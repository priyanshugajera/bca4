#include<iostream.h>
#include<conio.h>
class sya
{
	public:
	void fun();
};
void sya::fun()//inline
{
	for(int i=0;i<5;i++)
		cout<<"hello="<<i<<endl;
}
void main()
{
	clrscr();
	sya obj;
	obj.fun();
	getch();
}