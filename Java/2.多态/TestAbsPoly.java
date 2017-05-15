abstract class A
{
	abstract public void f();
}

class B extends A
{
	public void f()
	{
		System.out.printf("BBBB\n");
	}
}

public class TestAbsPoly
{
	public static void main(String[] args)
	{
		//A aa = new A();     error A为抽象类  
		B bb = new B();
		bb.f();

		A aa;
		aa = bb;
		aa.f();
	}
}