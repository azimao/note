class A
{
	public void f()
	{
		System.out.printf("AAAA\n");
	}	
}

class B extends A
{
	public void f()
	{
		super.f();//调用从父类继承过来的f方法
		System.out.printf("BBBB\n");
	}
}

public class Testover
{
	public static void main(String[] args)
	{
		B bb = new B();
		bb.f();
	}
}

//结果为    AAAA     BBBB   