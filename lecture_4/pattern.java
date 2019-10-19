import java.util.Scanner;

import javax.lang.model.element.Element;
import javax.xml.stream.events.EndElement;
public class pattern
{
    public static Scanner scn=new Scanner(System.in); 
    public static void patternn(int rows){
        for(int n=0; n<=rows; n++)
        {   
            int val=1;
            for(int r=0; r<=n; r++)
            {
                System.out.print(val);
                val=(val*(n-r)/(r+1));
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