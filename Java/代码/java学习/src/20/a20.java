
public class a20 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i,max,sec;
		int[] a={8,19,24,36,47,53,98,73};
		if(a[0]>a[1])
		{
			max=a[0];
			sec=a[1];
		}
		else
		{
			max=a[1];
			sec=a[0];
		}
		System.out.print("����ĸ�Ԫ��Ϊ��"+a[0]+" "+a[1]);
		for(i=2;i<a.length;i++)
		{
			System.out.print(" " + a[i]);
			if (a[i]>max)
			{
				sec=max;
				max=a[i];
			}
			else
				if (a[i]>sec)
					sec=a[i];
		}
		
		System.out.print("\n��������ֵΪ��"+max);
		System.out.print("    �����ֵΪ��"+sec);

	}

}
