using System;//library namespace
class descending_order
{
	public static void Main()
	{
		Console.Write("Enter you want to print DESCENDING FIRST number=");
		int num=Convert.ToInt32(Console.ReadLine());
		while(num>0)
		{
			
			Console.WriteLine(num);
			num--;
		}
		Console.ReadLine();
	}
	
}
