public class aa15 
{
   public static void main(String[] args)
   {
    double sn = 100;
    double hn = sn / 2;  
    int i = 0;
    for (i = 1;i<10;i ++)
     { 
      sn = sn + hn * 2; 
      hn = hn / 2;
     }

   System.out.println("��" + i + "����ؾ���" + sn +"��"); 
   System.out.println("��" + i + "�η���" + hn + "��");

   }

}