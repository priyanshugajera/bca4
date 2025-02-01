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

	demo operator -(demo o)//o is copy of obj1
	{
		a=10;// a is data member of obj
		o.a=20;// o.a is data member of o
		cout<<"\nin -overloading"<<"\t a="<<a<<"\to.a="<<o.a;
		return o;
	}
	//friend demo operator +(demo);

};
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
	obj1=obj-obj1; //obj is calling object
		       //obj1 is a parameter object
		       //obj1= is stores returning object o
	cout<<endl<<endl<<"after calling obj.fun()";
	obj.fun();
	cout<<endl<<endl<<"after calling onj1/fun()";
	obj1.fun();
	getch();
    //	return 0;
}