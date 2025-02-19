using System;
public {
	public static void Main()
	{
		Console.Write("enter row length =");
		int r=Convert.ToInt32(Console.ReadLine());
		
		
		int[][] a=new int[r][];
		int[] col=new int[r];
		
		Console.WriteLine("*********************");
		for(int i=0;i<a.GetLength(0);i++)
		{
				Console.Write("enter column[{0}] length =",i);
			   col[i]=Convert.ToInt32(Console.ReadLine());
		}
		Console.WriteLine("*********************");
		//Console.WriteLine(a.Length);
		for(int i=0;i<a.GetLength(0);i++)
		{
		
				for(int j=0;j<a[i].Length;j++)
				{
					Console.Write("a[{0}][{1}]:",i,j);
					a[i][j]=Convert.ToInt32(Console.ReadLine());
				}
		} 
		
		/*for(int i=0;i<a.GetLength(0);i++)
		{
		
				for(int j=0;j<a[i].Length;j++)
				{
					Console.Write("a[{0}{1}]:{2} ",i,j,a[i][j]);				
				}
		}*/
		Console.ReadLine();
		
	}
}