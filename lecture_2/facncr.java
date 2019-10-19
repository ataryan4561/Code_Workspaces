import java.util.Scanner;
public class facncr {
     public static Scanner scn=new Scanner(System.in); 
     public static void main(String[] args)
     {
      System.out.print("Enter the value of n");
      int g=scn.nextInt();
      System.out.println(fac(g));
      cnr();
    }
    public static int fac(int n)
        {
            int ans =1;
            while(n!=1)
            {
                ans=ans*n;
                n--;
            }
            return ans;
        }
        public static void cnr()
{
    System.out.println("Enter the value of n anr r");
    int n=scn.nextInt();
    int r=scn.nextInt();
    int a=(fac(n)/(fac(n-r)*fac(r)));
    System.out.println("cnr=" +a);
}
}