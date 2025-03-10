using System;
class parents
{
	public void display()
	{
		Console.WriteLine("parents display called");
		display2();
	}
	public static void display2()
	{
		Console.WriteLine("parents display2 called");
	}
}
class child:parents
{
	public void fun()
	{
		Console.WriteLine("child fun called");
		display2();
	}
}
class subchild:child
{
	public void fun2()
	{
		Console.WriteLine("subchild fun2 called");
		display2();
	}
}
class Multi_level_inheritance
{
	public static void Main()
	{
		Console.WriteLine("hii");
		subchild obj=new subchild();
		obj.display();
		obj.fun();
	}
}