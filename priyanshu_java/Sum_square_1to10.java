class Sum_square_1to10
{
   public static void main(String[] args)
    {
		int i=1;
		int sum=0;
		int square=0;
		while(i<=10)
		{
			square=i*i;
			sum+=square;
			i++;
		}
		System.out.println("sum of squares of 1 to 10 is = "+sum);
	}
}