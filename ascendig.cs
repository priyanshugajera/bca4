using System;//library namespace
class ascending_order
{
	public static void Main()
	{
		Console.Write("Enter you want to print last number=");
		int user=Convert.ToInt32(Console.ReadLine());
		for(int num=1;num<=user;num++)
		Console.WriteLine(num);
		Console.ReadLine();
	}
	
}