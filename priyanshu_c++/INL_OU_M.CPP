#include<iostream.h>
#include<conio.h>
class sya
{
	public:
	void fun();
};
inline void sya::fun()//inline
{

		cout<<"hello"<<endl;
}
void main()
{
	clrscr();
	sya obj;
	obj.fun();
	getch();
}