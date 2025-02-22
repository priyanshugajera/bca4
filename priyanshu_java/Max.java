import java.util.Scanner;
class Max
{
	public static void main(String[] args)
	{
		Scanner vari=new Scanner(System.in);
		System.out.print("Enter num1=");
		int num1=vari.nextInt();
		System.out.print("Enter num2=");
		int num2=vari.nextInt();
		System.out.print("Enter num3=");
		int num3=vari.nextInt();
		if(num1>num2 && num1>num3)
		{
				
					System.out.println("num1 is greater");
				
				
				
		}
		else
		{
				if(num2>num1 && num2>num3)
				{
					System.out.println("num2 is greater");
				}
				else
				{
					System.out.println("num3 is greater");	
				}
		}		
	}
}