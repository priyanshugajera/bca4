using System;
class one
{	
	public void abc()
	{
		Console.WriteLine("1st called");
	}
}
class two:one
{
	public  new void abc ()
	{
		Console.WriteLine("called dispay() in a two");
	}
}
class three:two
{
	public void xyz()
	{
		Console.WriteLine("called dispay() 3");
	}
}
class multi_lvl_inherit
{
	public static void Main()
	{
		three obj=new three();
		obj.xyz();
		obj.abc();
	}
}