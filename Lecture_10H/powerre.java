import java.util.Scanner;
public class powerre {
     public static Scanner scn=new Scanner(System.in); 
     public static void main(String[] args)
     {
      System.out.print("Enter the value of a,b ");
      System.out.println();
      int g=scn.nextInt();
      int h=scn.nextInt();
      System.out.println(pow(g,h)); 
    }
    public static int pow(int a,int b)
        {
            if(b==1)
            {
                return a;
            }
            int sa=pow(a,b-1);
            return sa*a; 
        }
}