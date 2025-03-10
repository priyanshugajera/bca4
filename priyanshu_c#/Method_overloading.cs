using System;
class Person
{	
	public void display()
	{
		Console.WriteLine("1st called");
	}
	public void display(int a, double b)
	{
		Console.WriteLine("3rd called");
	}
	public void display(double b, int a)
	{
		Console.WriteLine("2nd called");
	}
	
}
class Method_overloading
{
	public static void Main()
	{
		Person obj=new Person();
		obj.display();	
		obj.display(10, 10.50);	
		obj.display(10.50, 100);	
	}
}
