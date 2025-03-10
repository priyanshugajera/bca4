using System;
class demo
{
	public virtual void method()
	{
		Console.WriteLine("fun");
	}
}
class xyz:demo
{
	public sealed override void method()
	{
		Console.WriteLine("METHOD");
	}
}
class Sealed_method
{
	public static void Main()
	{
		xyz x=new xyz();
		x.method();
	}
}