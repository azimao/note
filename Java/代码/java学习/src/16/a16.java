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
	      System.out.print("请输入正数m：");
	      str=buf.readLine();
	      m=Integer.parseInt(str);
	    } while (m<=0);     //当m<0则，否则会一直重复输入，直到m>0为止
	    while (s<m)   // 判断n!<m是否成立
	    {
	      s*=n;   //计算s=n!
	      n++;
	    }
	    System.out.println("s="+s/(n-1)+"    n="+(n-2));   //输出结果
	  }


}
