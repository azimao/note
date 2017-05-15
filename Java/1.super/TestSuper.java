class A
{
	public int i;
	public int j;

	public A()
	{

	}

	public A(int i, int j)
	{
		this.i = i;
		this.j = j;
	}

}

class B extends A
{
	public int k;

	public B()
	{

	}

	public B(int i, int j, int k)
	{
		super(i, j);
		this.k = k;
	}

}

public class TestSuper
{
	public static void main(String[] args)
	{
		B bb = new B(1, 2, 3);
		System.out.printf("%d %d %d\n", bb.i, bb.j, bb.k);
	}
}