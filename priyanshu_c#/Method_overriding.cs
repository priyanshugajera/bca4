using System;
class Person
{	
	public void display()
	{
		Console.WriteLine("1st called");
	}
}
class abc:Person
{
	public new void display()
	{
		Console.WriteLine("called dispay()");
	}
}
class Method_overriding
{
	public static void Main()
	{
		abc a1=new abc();
		a1.display();
	}
}