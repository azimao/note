public class aa17 
{ 
    public static void main(String[]args)
    {
    	
        int total = 1; 
        int day = 10; 
        for(int i = 10;i>0;i--)
        { 
        	if(i==1)
        	{
        		System.out.println("一共有"+total+"个桃子");
        	}
               
            total = (total + 1) * 2; 
            day--; 
            
           
        } 
        
    } 
} 