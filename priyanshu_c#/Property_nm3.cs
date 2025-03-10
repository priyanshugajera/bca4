using System;
class Property_nm2
{
	private string nm;
	public string pr_nm
	{
		
		get	
		{
			return nm;
		}
		
	}
	public void fun(string getnm)
	{
		nm=getnm;
		//Console.WriteLine("name="+nm);
	}
	
}
class main_cls
{
	public static void Main()
	{
		Property_nm2 obj=new Property_nm2();
		Console.Write("Enter you name=");
		//obj.pr_nm=Console.ReadLine();
		obj.fun(Console.ReadLine());
		Console.WriteLine("value of name in main="+obj.pr_nm);
		
	}
}