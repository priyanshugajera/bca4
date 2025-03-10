using System;
class Property_nm2
{
	private string nm;
	public string pr_nm
	{
		set
		{
			nm=value;
		}
		/*get	
		{
			return nm;
		}*/
		
	}
	public void fun()
	{
		Console.WriteLine("name="+nm);
	}
	
}
class main_cls
{
	public static void Main()
	{
		Property_nm2 obj=new Property_nm2();
		Console.Write("Enter you name=");
		obj.pr_nm=Console.ReadLine();
		obj.fun();
		//Console.WriteLine("value of name in main="+obj.pr_nm);
		
	}
}