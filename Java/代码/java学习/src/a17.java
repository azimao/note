public class a17 
{ 
    public static void main(String[]args)
    {
    	
        int total = 1; 
        int day = 10; 
        for(int i = 10;i>0;i--)
        { 
        	if(i==1)
        	{
        		System.out.println("һ����"+total+"������");
        	}
               //System.out.println("��"+day+"��,������"+total+"��"); 
            total = (total + 1) * 2; 
            day--; 
            
            //System.out.println("һ����"+total+"������");
        } 
        
    } 
} 