abstract class Myabstractclass
{
	abstract void abstractmethod();
	void concretemethod()
	{
		System.out.println("This is a concrete method with body");
	}
}
class Myconcreteclass extends Myabstractclass
{
	void abstractmethod()
	{
		System.out.println("This is the implement body of abstract method");
		
	}
}
public class Abstract
{
	public static void main(String []args)
	{
		Myconcreteclass obj=new Myconcreteclass();
		
		obj.abstractmethod();
		//this is the implement body
		
		obj.concretemethod();
		//this is concretemethod
	}
}