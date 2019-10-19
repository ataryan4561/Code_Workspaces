import java.util.Scanner;
public class prime {
     public static Scanner scn=new Scanner(System.in);
     public static boolean isprime(int n)
     {   
         for(int i=2; i*i<=n; i++)
         {
             if(n%i==0)
             return false;
         }
         return true;
     }
     public static void main(String[] args)
     {
        System.out.print("Enter the value of n");
        int g=scn.nextInt();
        System.out.print(isprime(g));
     }
    }



