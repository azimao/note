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
		System.out.printf("BBBB\n");
	}

}

public class TestPoly_2
{
	public static void main(String[] args)
	{
		A aa = new A();
		B bb = new B();

		aa = bb;

		bb = (B)aa;   // 强制把父类转换成子类
		bb.f();
	}
}
