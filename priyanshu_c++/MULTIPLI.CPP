#include<iostream.h>
#include<conio.h>
class demo
{
	public:
		int value;
		int fun(demo obj2,demo obj3)
		{
			//sum=obj2.value+obj3.value;
			//sub=obj3.value-obj2.value;
			//mul=obj2.value*obj3.value;
			return obj2.value*obj3.value;
		}
};
void main()
{
	demo obj1,obj2,obj3;
	clrscr();
	obj2.value=10;
	obj3.value=20;
	cout<<"multiplication is="<<obj1.fun(obj2,obj3);
	getch();
}
