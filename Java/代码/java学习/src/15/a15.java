public class a15 
{
   public static void main(String[] args)
   {
    double sn = 100;// �߶�100�� 
    double hn = sn / 2; //��һ�η��������߶� 
    int i = 0;
    for (i = 1;i<10;i ++){ 
    sn = sn + hn * 2; //��i����ؾ���������
    hn = hn / 2;//��i�η����ĸ߶�
}

System.out.println("��" + i + "����ؾ���" + sn +"��"); 
//System.out.println("��" + i + "�η���" + hn + "��");
}

}