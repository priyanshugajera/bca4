class enumexample
{
	enum Data{BCA,MCS,MSC};
	public static void main(String[] args)
	{
		 for (Data var_1 : Data.values()) 
		 {
            System.out.println(var_1);
         }
	}
	
}
