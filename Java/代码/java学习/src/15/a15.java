public class a15 
{
   public static void main(String[] args)
   {
    double sn = 100;// 高度100米 
    double hn = sn / 2; //第一次反弹反弹高度 
    int i = 0;
    for (i = 1;i<10;i ++){ 
    sn = sn + hn * 2; //第i次落地经过多少米
    hn = hn / 2;//第i次反弹的高度
}

System.out.println("第" + i + "次落地经过" + sn +"米"); 
//System.out.println("第" + i + "次反弹" + hn + "米");
}

}