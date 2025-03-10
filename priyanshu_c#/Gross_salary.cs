using System;
class Gross_salary
{
	public void fun(ref double salary,out double g_salary)
	{
		
		double ta=0,da=0,hra=0,pf=0;
		if(salary>=35000 && salary<=45000)
		{
			ta=salary*5/100;
			Console.WriteLine("ta is="+ta);
			da=salary*5/100;
			Console.WriteLine("da is="+da);
			hra=salary*15/100;
			Console.WriteLine("hra is="+hra);
			pf=salary*8.5/100;
			Console.WriteLine("pf is="+pf);
			
		}
		if(salary<35000)
		{
			ta=salary*9/100;
			Console.WriteLine("ta is="+ta);
			da=salary*12/100;
			Console.WriteLine("da is="+da);
			hra=salary*20/100;
			Console.WriteLine("hra is="+hra);
			pf=salary*8.5/100;
			Console.WriteLine("pf is="+pf);
			
		}
		g_salary=(ta+da+hra)-pf;
	}
}
class main_cls
{
	public static void Main()
	{
		double basic_salary,gross_salary;
		Console.Write("enter basic salary=");
		basic_salary=Convert.ToInt32(Console.ReadLine());
		Gross_salary obj=new Gross_salary();
		obj.fun(ref basic_salary,out gross_salary);
		Console.WriteLine("Gross salary="+(gross_salary+basic_salary));
	}
}