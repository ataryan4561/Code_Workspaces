import java.util.Scanner;

import javax.lang.model.element.Element;
import javax.xml.stream.events.EndElement;
public class fibonacci
{
    public static Scanner scn=new Scanner(System.in); 
    public static void fibonacci1(int g,int j,int f)
    {
            int first=g;
            int second=j;
            System.out.print(first);
            System.out.print(" ");
            System.out.print(second);
            System.out.print(" ");
            for(int i=2; i<f; i++)
            {
                int third=first+second;
                first=second;
                second=third;
                System.out.print(third);
                System.out.print(" ");
            }
    }
    public static void main(String[] args)
    {
        System.out.print("Enter the First two numbers and n");
        int g=scn.nextInt();
        int j=scn.nextInt();
        int f=scn.nextInt();
        fibonacci1(g,j,f);
    }

}