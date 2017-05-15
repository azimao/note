class B
{
	public static int i = 10;
	
	// public void f()
	// {
	// 	int a = 0;
	// 	i = a;
	// }

	public void show()
	{
		System.out.printf("%d\n", i);
	}
}

class GG
{
	public static void main(String[] args)
	{
		B bb1 = new B();
		B bb2 = new B();
		B.i = 44;   //  结果i 为44

		bb2.show();


	}

}
