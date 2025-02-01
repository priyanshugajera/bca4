#include<iostream.h>
#include<conio.h>
class sya
{
	private: //access modifier
	int a;//DATA MEMBER
	public:
	void assign(int x)
	{
		a=x;
	}
	void show()
	{
		cout<<"\n\nhello class\n"<<a;
		cout<<endl<<a<<endl;
	}
};
void main()
{
	sya o,o1;
	clrscr();
	o.assign(20);
	o1.assign(8);
	o1.show();

	getch();
}