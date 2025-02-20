using System;
class Udf
{
	public void fun()
	{
		int a=10;
		int b=20;
		Console.WriteLine("sum="+(a+b));
	}
	public static void Main()
	{
		Udf obj=new Udf();
		obj.fun();
		Console.WriteLine("Hello");
		Console.ReadLine();
	}
}