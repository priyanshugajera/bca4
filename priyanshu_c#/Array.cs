using System;
class Array
{
	public static void Main()
	{
		Console.Write("enter length you want to end loop=");
		int n=Convert.ToInt32(Console.ReadLine());
		int[] a=new int[n];
		
		for(int i=0;i<a.Length;i++)
		{
			Console.Write("a[{0}]:",i+1);
			a[i]=Convert.ToInt32(Console.ReadLine());
			
		}
		Console.WriteLine("*********************");
		
		for(int i=0;i<a.Length;i++)
		{
			
			Console.WriteLine("a[{0}]:{1}",i+1,a[i]);
		}
	}
}