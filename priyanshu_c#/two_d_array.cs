using System;
class two_d_array
{
	public static void Main()
	{
		Console.Write("enter row length =");
		int r=Convert.ToInt32(Console.ReadLine());
		Console.Write("enter column length =");
		int c=Convert.ToInt32(Console.ReadLine());
		
		int[,] a=new int[r,c];
		int []sum =new int [r];
		for(int i=0;i<a.GetLength(0);i++)
		{
			for(int j=0;j<a.GetLength(1);j++)
			{
				Console.Write("a[{0}{1}]:",i,j);
				a[i,j]=Convert.ToInt32(Console.ReadLine());
			}
			Console.Write("\n");
		}
		Console.WriteLine("*********************");
		for(int i=0;i<a.GetLength(0);i++)
		{
			for(int j=0;j<a.GetLength(1);j++)//int[] a=new int[n];
			{
				
				sum[i]+=a[i,j];
				Console.Write("a[{0}{1}]:{2} ",i,j,a[i,j]);				
			}
			Console.Write("\n");
		}	
		Console.WriteLine("*********************");
		for(int i=0;i<a.GetLength(0);i++)
		{
			Console.WriteLine("sum of arr[{0}]={1}",i,sum[i]);
		}
	}
}