#include<iostream.h>
#include<conio.h>
class sya
{
	private:
		int a;
	public:
		void assign(int);

};
void sya::assign(int y) //outside of the class member function body part
			// using scope of resolution
{
	a=y;
	cout<<"hello="<<a<<endl;
}
void main()
{
	sya o,o1;
	clrscr();
	o.assign(20);
	o1.assign(8);
	getch();
}