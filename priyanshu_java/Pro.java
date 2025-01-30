class Pro
{
	static void check()
	{
		System.out.println("Static method body");
	}
	void nonstatic()
	{
		System.out.println("Non-Static method body");
	}
	public static void main(String[] args)
	{
		check();
		Pro obj=new Pro();
		obj.nonstatic();
		System.out.println("this is static method program");
	}
}