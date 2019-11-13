import java.util.Scanner;
public class facr {
     public static Scanner scn=new Scanner(System.in); 
     public static void main(String[] args)
     {
      System.out.print("Enter the value of n");
      int g=scn.nextInt();
      System.out.println(fac(g));
      
    }
    public static int fac(int n)
        {
            if(n==1)
            {
                return 1;
            }
            int sa=fac(n-1);
            return sa*n; 
        }
}