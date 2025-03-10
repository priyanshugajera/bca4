using System;
class String_arr
{
	public static void Main()
	{
		Console.Write("enter length you want to end loop=");
		int n=Convert.ToInt32(Console.ReadLine());
		string [] a=new string[n];
		
		for(int i=0;i<a.Length;i++)
		{
			Console.Write("a[{0}]:",i+1);
			a[i]=Console.ReadLine();
			
		}
		Console.WriteLine("*********************");
		
		foreach(string data in a)
		{
			
			Console.WriteLine(data);
		}
	}
}