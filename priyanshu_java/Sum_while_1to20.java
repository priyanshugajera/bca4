class Sum_while_1to20
{
   public static void main(String[] args)
    {
		int i=1;
		int sum=0;
		while(i<=20)
		{
			if(i%2==0)
			{
				sum+=i;
			}
			i++;
		}
		System.out.println("sum of 1 to 20 total even number is = "+sum);
	}
}