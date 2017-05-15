public class shishiba
{
  public static void main(String args[ ])
  {
    int i,j;
    int Level=7;
    int iaYong[ ][ ] =new int[Level][]; //声明7行二维数组，存放杨辉三角形
    System.out.println("杨辉三角形");
    for (i=0;i<iaYong.length;i++)
      iaYong[i]=new int [i+1];    //定义二维数组的第i行有i+1列
    iaYong[0][0]=1;
    for (i=1;i<iaYong.length;i++)     //计算杨辉三角形
    {
      iaYong[i][0]=1;
      for (j=1;j< iaYong[i].length-1;j++)
        iaYong[i][j]= iaYong[i-1][j-1]+ iaYong[i-1][j];
      iaYong[i][ iaYong[i].length-1]=1;
    }
    for(i=0;i< iaYong.length;i++)    //显示出杨辉三角形
    {
    	  
      for(j=0;j< iaYong[i].length;j++)
  
      System.out.print(iaYong[i][j]+"  ");
      System.out.println( );
    }
  }
}




