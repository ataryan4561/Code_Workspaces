import java.util.Scanner;
import javax.xml.stream.events.EndElement;
public class pattern
{
    public static Scanner scn=new Scanner(System.in); 
    public static void patternn(int rows){
        int nst=1;
        int nsp=rows/2;
        for(int r=1; r<=rows; r++)
        {
            for(int csp=1; csp<=nsp; csp++)
            {
                System.out.print(" ");
            }
            int ele=r;
            if(r>(rows+1)/2)
            {
                ele=rows-r+1;
            }
            for(int cst=1; cst<=nst; cst++)
            {
                System.out.print(ele);
                if(cst<=nst/2)
                ele++;
                else
                ele--;
            }
            if(r<=rows/2)
            {
            nst=nst+2;
            nsp--;
            }
            else{
                nst-=2;
                nsp++;
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        System.out.print("Enter the value of rows");
        int g=scn.nextInt();
        patternn(g);
    }

}