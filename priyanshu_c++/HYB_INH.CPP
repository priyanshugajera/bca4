#include<iostream.h>
#include<conio.h>
class parents
{
	public:
	int a,b;
};
class p2:protected parents
{
	public:
	void pfun()
	{
		a=100,b=200;
		cout<<endl<<"p2 class:     "<<"a="<<a<<"\tb="<<b;
	}

};
class child:public parents
{
	public:
	void fun()
	{
		a=10,b=20;
		cout<<"child class:     "<<"a="<<a<<"\tb="<<b;
	}
};
class subchiled:public child
{
	public:
	int c;

};

void main()
{
	clrscr();
	child obj;
	p2 o;
	subchiled s;
	cout<<"s.c="<<s.c<<endl;

	obj.a=30;
       //	o.a=30;// not valid because private inherited
	obj.fun();
	o.pfun();

	getch();
}