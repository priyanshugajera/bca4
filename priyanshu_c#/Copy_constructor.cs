using System;
class Constructor_sum
{
	public int x;
	public Constructor_sum(){}
	public Constructor_sum(Constructor_sum cpy)
	{
		x=cpy.x;
	}
	public void fun()
	{
		Console.WriteLine("data of x="+x);
	}
	
	public static void Main()
	{
		Constructor_sum obj1=new Constructor_sum();
		Console.Write("Enter value of x data member=");
		obj1.x=Convert.ToInt32(Console.ReadLine());
		Constructor_sum obj2=new Constructor_sum(obj1);
		obj1.fun();
		obj2.fun();
		Console.ReadLine();
	}
}