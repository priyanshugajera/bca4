using System;
abstract class demo
{
	public void fun()
	{
		Console.WriteLine("normal fun");
	}
	public abstract void abs_method(int x);
}
class xyz:demo
{
	public override void abs_method(int x)
	{
		Console.WriteLine("abstract method in xyz class="+x);
	}
}
class pqr:demo
{
	public override void abs_method(int x)
	{
		Console.WriteLine("abstract method in pqr class");
	}
}
class Abstract_cls
{
	public static void Main()
	{
		xyz x=new xyz();
		x.fun();
		x.abs_method(10);
		Console.WriteLine("MAIN");
	}
}