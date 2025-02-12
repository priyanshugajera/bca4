using System;
class dynamic_var
{
	public static void Main()
	{
		dynamic msg="hello";
		Console.WriteLine(msg);
		msg=Console.ReadLine();
		Console.WriteLine(msg);
	}
}