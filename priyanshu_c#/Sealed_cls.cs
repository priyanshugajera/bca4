using System;
class demo
{
	public void fun()
	{
		Console.WriteLine("fun");
	}
}
sealed class xyz:demo
{
	public void method()
	{
		Console.WriteLine("METHOD");
	}
}
class Sealed_cls
{
	public static void Main()
	{
		xyz x=new xyz();
		x.fun();
		x.method();
	}
}