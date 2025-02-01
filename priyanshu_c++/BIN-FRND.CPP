#include<iostream.h>
#include<conio.h>
class demo
{
	//int a;
	public:
	int a;
	void fun()
	{
		cout<<"\nfun"<<endl<<a;
	}
	friend void operator -(demo,demo);//friend function
};
demo exp;
void operator -(demo o,demo o1)
{
	o.a=10;// a is data member of obj
	o1.a=30;// o.a is data member of o
	cout<<"\nin -overloading"<<"\t a="<<o.a<<"\to.a="<<o1.a;
	exp.a=o.a-o1.a;
      //	return o.a-o1.a;
}
/*demo operator +(demo o)
{
	o.a=+1011;
	cout<<"\nin friend --> operator overloading" ;
	return o;
}*/
void main()
{
	clrscr();
	demo obj,obj1;
	obj.a=1;
	obj1.a=2;
	obj-obj1; //obj is calling object
		       //obj1 is a parameter object
		       //obj1= is stores returning object o
	cout<<endl<<endl<<"after calling obj.fun()";
	obj.fun();
	cout<<endl<<endl<<"after calling obj1/fun()";
	exp.fun();
	getch();
    //	return 0;
}
