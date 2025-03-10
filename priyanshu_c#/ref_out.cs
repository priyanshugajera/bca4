using System;
class Ref_out
{
	public void fun(ref int r,out int o)
	{
		o=100;
		Console.WriteLine("r={0}, o={1}",r,o);
		
		o=22;
		r=33;
	}
}
class Main_cls
{
	public static void Main()
	{
		int a=10,b;
		Ref_out obj=new Ref_out();
		obj.fun(ref a,out b);
		Console.WriteLine("after calling --> MAIN a={0}, b{1}",a,b);
	}
}