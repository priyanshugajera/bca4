#include<iostream.h>
#include<conio.h>
class one
{
	public:
	void show()
	{
		cout<<"show()";
	}
	class two
	{
		public:
		void show2()
		{
			cout<<endl<<"show2()";
		}
	};
};
void main()
{
	clrscr();
	one o_obj;
	o_obj.show();
	one::two t;
	t.show2();
	getch();
}