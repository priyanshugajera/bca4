using System;
class Jagged_array
{
	public static void Main()
	{
		int[][] a=new int[3][];
		a[0]=new int[2]{1,2};
		a[1]=new int[4]{4,5,6,8};
		a[2]=new int[3]{7,8,9};
		
		//Console.WriteLine(a[1].Length);
		Console.WriteLine("*********************");
		for(int i=0;i<a.GetLength(0);i++)
		{
			if(i==0)
			{
				for(int j=0;j<a[0].Length;j++)
				{
					Console.Write("{0} ",a[i][j]);				
				}
				Console.Write("\n");
			}
			if(i==1)
			{
				for(int j=0;j<a[1].Length;j++)
				{
					Console.Write("{0} ",a[i][j]);				
				}
				Console.Write("\n");
			}
			if(i==2)
			{
				for(int j=0;j<a[2].Length;j++)
				{
					Console.Write("{0} ",a[i][j]);				
				}
				Console.Write("\n");
			}
		}
		
	}
}