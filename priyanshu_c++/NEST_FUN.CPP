//nestinng of member function
#include<iostream.h>
#include<conio.h>
class sya
{
	public://access modifier
		void fun()//public member fun
		{
			cout<<"hello";
			show();//nesting member of function
		}
	private://access specifier
		void show()//private member fun
		{
			cout<<endl<<"show()";
		}
};
void main()
{
	clrscr();
	sya obj;
	obj.fun();
	getch();
}