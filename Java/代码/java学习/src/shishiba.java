public class shishiba
{
  public static void main(String args[ ])
  {
    int i,j;
    int Level=7;
    int iaYong[ ][ ] =new int[Level][]; //����7�ж�ά���飬������������
    System.out.println("���������");
    for (i=0;i<iaYong.length;i++)
      iaYong[i]=new int [i+1];    //�����ά����ĵ�i����i+1��
    iaYong[0][0]=1;
    for (i=1;i<iaYong.length;i++)     //�������������
    {
      iaYong[i][0]=1;
      for (j=1;j< iaYong[i].length-1;j++)
        iaYong[i][j]= iaYong[i-1][j-1]+ iaYong[i-1][j];
      iaYong[i][ iaYong[i].length-1]=1;
    }
    for(i=0;i< iaYong.length;i++)    //��ʾ�����������
    {
    	  
      for(j=0;j< iaYong[i].length;j++)
  
      System.out.print(iaYong[i][j]+"  ");
      System.out.println( );
    }
  }
}




