import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class a16 {
	public static void main(String args[]) throws IOException
	  {
	    int n=1,s=1,m;
	    String str;
	    BufferedReader buf;
	    buf=new BufferedReader(new InputStreamReader(System.in));
	    do {
	      System.out.print("����������m��");
	      str=buf.readLine();
	      m=Integer.parseInt(str);
	    } while (m<=0);     //��m<0�򣬷����һֱ�ظ����룬ֱ��m>0Ϊֹ
	    while (s<m)   // �ж�n!<m�Ƿ����
	    {
	      s*=n;   //����s=n!
	      n++;
	    }
	    System.out.println("s="+s/(n-1)+"    n="+(n-2));   //������
	  }


}
