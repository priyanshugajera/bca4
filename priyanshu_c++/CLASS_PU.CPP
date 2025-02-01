#include<iostream.h>
#include<conio.h>
class sya
{
	public: //access modifier
	int a;//DATA MEMBER
	void show()
	{
		cout<<"\n\nhello class\n"<<`a;
		a=123;
		cout<<endl<<a<<endl;
	}
};
void main()
{
	sya o;
	clrscr();
	o.a=10;
	cout<<o.a;
	o.show();
	cout<<"main:"<<o.a;
	getch();
}