using System;
class Static_constructor
{
	static int a;
	Static_constructor(int x)
	{
		a=x;
	}
	public void display()
	{
		Console.WriteLine("a="+a);
	}
	public static void Main()
	{
		Static_constructor obj1 = new Static_constructor(10);
		Static_constructor obj2 = new Static_constructor(20);
		obj1.display();
		obj2.display();
	}
}