import java.util.Scanner;
class Three_d_arr
{
	public static void main(String[] args)
	{
		Scanner vari=new Scanner(System.in);
		System.out.print("Enter value of block=");
		int block=vari.nextInt();
		System.out.print("Enter value of row=");
		int row=vari.nextInt();
		System.out.print("Enter value of col=");
		int col=vari.nextInt();
		
		int array[][][]=new int[block][row][col];
		
		System.out.println("Enter value of = "+block+" block-->"+row+" row *"+col+" col");
		for(int i=0;i<block;i++)
		{
			for(int j=0;j<row;j++)
			{
				for(int k=0;k<col;k++)
				{
					System.out.print("array{0}{1}{2}",i,j,k +"=  ,");
					int value=vari.nextInt();
					array[i][j][k]=value;
				}
				System.out.println();
			}
			System.out.println();
		}
		System.out.println("****************************");
		for(int a=0;a<array.length;a++)
		{
			for(int b=0;b<array[a].length;b++)
			{
				for(int c=0;c<array[a][b].length;c++)
				{
					System.out.print(array[a][b][c]+" ");
				
				}
				System.out.println();
			}
			System.out.println();
		}
	}
}