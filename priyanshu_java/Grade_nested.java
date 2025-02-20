import java.util.Scanner;
class Grade_nested
{
   public static void main(String[] args)
    {
		Scanner object=new Scanner(System.in);
		System.out.print("Enter percantage=");
		int percantage=object.nextInt();
		System.out.println("percantaage is="+percantage);
	 
		if(percantage>=33 )
		{
			if(percantage>=33 & percantage<=80)
			{
				if(percantage>=33 & percantage<=50)
				{
					System.out.println("D grade");
				}
				else
				{
					if(percantage>50 & percantage<=60)
					{
						System.out.println("C grade");
					}
					else
					{
						System.out.println("B Grade");
					}
				}
				
			}
			else
			{
				if(percantage > 80 & percantage <=90)
				{
					System.out.println("A Grade");
				}
				else
				{
					System.out.println("Distiction");
				}
			}
		}
		else
		{
			System.out.println("Fail");
		}
	}
}