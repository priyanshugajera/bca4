using System;
class Person
{	
	public void display()
	{
		Console.WriteLine("normal display udf");
		abc();
	}
	public static void abc()
	{
		Console.WriteLine("static abc method");
	}
	
}
class Static_method_call
{
	public static void Main()
	{
		Person obj=new Person();
		obj.display();
	}
}
