import java.util.Scanner;
class Grade_switch
{
   public static void main(String[] args)
    {
		Scanner object=new Scanner(System.in);
		System.out.print("Enter percantage=");
		int percantage=object.nextInt();
		System.out.println("percantaage is="+percantage);
		int grade;
		if(percantage>=33 )
		{
			if(percantage>=33 & percantage<=80)
			{
				if(percantage>=33 & percantage<=50)
				{
					grade=4;	
				}
				else
				{
					if(percantage>50 & percantage<=60)
					{
						grade=3;	
					}
					else
					{
						grade=2; 	
					}
				}
			}
			else
			{
				if(percantage > 80 & percantage <=90)
				{
					grade=1; 
				}
				else
				{
					grade=0; 
				}
			}
		}
		else
		{
			grade=5; 
		}
		
		switch(grade)
		{
			case 0:
				System.out.println("Distiction");
				break;
			case 1:
				System.out.println("A Grade");
				break;
			case 2:
				System.out.println("B Grade");
				break;
			case 3:
				System.out.println("C grade");
				break;
			case 4:
				System.out.println("D grade");
				break;
			case 5:
				System.out.println("Fail");
				break;
			
			default:
				System.out.println("NO such grade is match");
		}
	}
}