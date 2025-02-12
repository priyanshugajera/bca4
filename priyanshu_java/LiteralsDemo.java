public class LiteralsDemo
{
	public static void main(String args[])
	{
		int decimalLiterals=100;
		int binaryLiterals=0b1100100;  //Binary Prefix ob
		int octalLiterals=0144;  //octal prefix 0
		int hexaLiterals=0x65; //hexa prefix ox
		
		float floatLiterals=2.718f; //suffix s
		
		char charLiterals='A';
		
		String stringLiterals="Hello,world";
	
		
		boolean trueLiteral=true;
		boolean FalseLiterals=false;
		
		String nullLiterals=null;

		System.out.println("Decimal:" + decimalLiterals);
		System.out.println("binary:" + binaryLiterals);
		System.out.println("octal:" + octalLiterals);
		System.out.println("hexa:" + hexaLiterals);
		System.out.println("Float:" + floatLiterals);
		System.out.println("char:" + charLiterals);
		System.out.println("string:" + stringLiterals);
		System.out.println("trueliteral:" + trueLiteral);
		System.out.println("FalseLiteral:" + FalseLiterals);
		System.out.println("null:" + nullLiterals);
	}
}