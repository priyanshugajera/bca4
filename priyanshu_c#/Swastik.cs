using System;
class Swastik
{
	public static void Main()
	{
		Console.Write("Enter a number you want to print=");
		int size=Convert.ToInt32(Console.ReadLine());
		if(size<5)
		{
			Console.WriteLine("Not Proper Design Less than 5 row");
		}
		else
		{
			int middle;
			if(size%2==0)
			{
				middle=size/2;
				Console.WriteLine("not able to proper design so automatic +1 in size");
			}
			else
			{
				size--;
				middle=size/2;
				
			}
			//Console.WriteLine(middle);
			for(int i=0;i<=size;i++)
			{
				for(int j=0;j<=size;j++)
				{
					if(i==middle||j==middle || j==0&&i<=middle || j==size&&i>=middle || i==0&&j==middle || i==size&&j<=middle || i==0&&j>=middle)
					{
						Console.Write("* ");
					}
					else
					{
						Console.Write("  ");
					}
				}
				Console.WriteLine();
		}
		}
	}
}