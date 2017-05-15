class Triangle{
	private int a, b, c;

	int zhouchang()
	{
		return a + b + c;
	}

	void fb(int i, int j, int k)
	{
		a = i;
		b = j;
		c = k;

	}

	double area()
	{
		double p = 1.0*(a+b+c) / 2;
		return Math.sqrt(p * (p-a) * (p-b) * (p-c));
	}

}

class TestTriangle_1
{
	public static void main(String[] args)
	{
		Triangle s = new Triangle();

		/*
		s.a = 3;
		s.b = 4;
		s.c = 5;
		*/
		s.fb(3, 4, 5);

		System.out.printf("%d %f\n", s.zhouchang(), s.area());
	}
}