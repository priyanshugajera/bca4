\#include<iostream.h>
#include<conio.h>
class arr
{
	private:
		int ary[5];
		int i,sum;
	public:
		void user();//fun for get value from user
		void print(); //fun for print arry
};
void arr::user()
{
	sum=0;
	for(i=0;i<5;i++)
	{
		cout<<"Enter a["<<i<<"]=";
		cin>>ary[i];
		sum+=ary[i];
	}
	print();
}
void arr::print()
{
	for(i=0;i<5;i++)
	{
		cout<<"a["<<i<<"]="<<ary[i]<<endl;
	}
	cout<<"sum of total value="<<sum;
}

void main()
{
	arr obj;
	clrscr();
	obj.user();
	getch();
}