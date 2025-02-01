#include<iostream.h>
#include<conio.h>
class ary
{
	int arr[5],i,j;
	public:
		void user();
		void print();
};
void ary::user()
{
	int match[5],j,count=0;
	for(i=0;i<5;i++)
	{
		cout<<"Enter a["<<i<<"]=";
		cin>>arr[i];
		match[count]=arr[i];
		count++;
		if(arr[i]<0)
		{
			cout<<endl<<"invalid number"<<endl;
			i--;
			count--;
		}
		for(j=count-2;j>=0;j--)
		{
			/*if(arr[i]<0)
			{
				cout<<endl<<"invalid number"<<endl;				i--;
			}*/
			if(match[j]==match[count-1])
			{
				count--;
				i--;
				cout<<"this number is repeated enter another number"<<endl;
			}


		}
	}
	print();
}

void ary::print()
{

	for(i=0;i<4;i++)
	{
	       //	cout<<"a["<<i<<"]="<<arr[i]<<endl;
	       for(j=0;j<4;j++)
	       {
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	       }
	}
	cout<<endl<<"****************\nafter Ascending order sorting"<<endl;
	for(i=0;i<5;i++)
	{
	       cout<<"a["<<i<<"]="<<arr[i]<<endl;

	}

	cout<<endl<<"****************\nafter descending order sorting"<<endl;

	for(i=0;i<4;i--)//0  //i=0;i<4;i++
	{
	       //cout<<"a["<<i<<"]="<<arr[i]<<endl;
	       for(j=0;j<4;j++) //0    j=0;j<4;j++
	       {
			if(arr[j]<arr[j+1])//0<1
			{
				int temp=arr[j];//temp=0
				arr[j]=arr[j+1];//j=1
				arr[j+1]=temp;//j+1=0
			}
	       }
	}
	for(i=0;i<5;i++)
	{
	       cout<<"a["<<i<<"]="<<arr[i]<<endl;

	}
//	getch();


}
void main()
{
	ary obj;
	clrscr();
	obj.user();
	//cout<<"hello";
	getch();
}