#include<iostream.h>
#include<conio.h>
class palindrome
{
	public:
		int a,b,num,reverse;

		void fun()
		{
				num=a%10;
				a=a/10;
				reverse=reverse*10+num;
		}
		void fun2();

};
void palindrome::fun2()
{
	cout<<"Enter a nuber=";
	cin>>a;
	reverse=0;
	b=a;
	while(a>0)
	{
		fun();
	}
	cout<<"reverse number is="<<reverse;
	if(b==reverse)
		cout<<endl<<"this is palindrome number";
	else
		cout<<endl<<"not palindrome number";
}

void main()
{
	palindrome obj;
	clrscr();
	obj.fun2();
	getch();
}