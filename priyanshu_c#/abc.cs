using System;
class Person
{
	public void display()
	{
		Console.WriteLine("display called");
		display2();
	}
	public static void display2()
	{
		Console.WriteLine("display2 called");
	}
}
class abc:Person
{
	public void fun()
	{
		Console.WriteLine("fun called");
		display2();
	}
	public static void Main()
	{
		Console.WriteLine("hii");
		abc a1=new abc();
		a1.display();
		a1.fun();
	}
}
