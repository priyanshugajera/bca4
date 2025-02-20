using System;
class unboxing
{
	public static void Main()
	{
		object obj=10;
		
		int a=(int)obj;
		Console.WriteLine("obj="+obj);
		Console.WriteLine("a="+a);
	}
}