using System;
class Constructor_sum
{
	int num1;
	int num2;
	public Constructor_sum(int a,int b)
	{
		num1=a;
		num2=b;
	}
	void fun()
	{
		Console.WriteLine("sum="+(num1+num2));
	}
	public static void Main()
	{
		Constructor_sum obj=new Constructor_sum(10,20);
		obj.fun();
	}
}