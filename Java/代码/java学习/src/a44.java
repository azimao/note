import java.util.*;
public class a44 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		 Scanner sc=new Scanner(System.in); 
		 int n=sc.nextInt(); 
		 int min=0; 
		 int max=0;
		 int []b=new int[n]; 
		 for(int i=0;i<n;i++){ 
		  b[i]=sc.nextInt();  
		 }
		 
		 min=max=b[0];
		 for(int i=1;i<n;i++){ 
		  if(min>b[i]){  
		   min=b[i];  
		   }  
		  if(max<b[i]){
		   max=b[i]; 
		   }  
		  }
		 System.out.println(min+" "+max); 
		 }
		}
		
	
				// TODO Auto-generated method stub

