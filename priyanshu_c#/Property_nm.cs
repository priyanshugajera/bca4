using System;
class Property_nm
{
	private string nm;
	public string pr_nm
	{
		set
		{
			nm=value;
		}
		get	
		{
			return nm;
		}
	}
	
}
class main_cls
{
	public static void Main()
	{
		Property_nm obj=new Property_nm();
		Console.Write("Enter you name=");
		obj.pr_nm=Console.ReadLine();
		Console.WriteLine("value of name in main="+obj.pr_nm);
		
	}
}