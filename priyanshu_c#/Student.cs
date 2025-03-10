using System;
public class Student
{
	int id;
	string name;
	public void print()
	{
		Console.WriteLine("id="+id);
		Console.WriteLine("Name="+name);
	} 
	public static void Main()
	{
		Student s1=new Student();
		Student s2=new Student();
		s1.id=10;
		s1.name="Gajera";
		s2.id=11;
		s2.name="Priyanshu";
		s1.print();
		s2.print();
	}
}