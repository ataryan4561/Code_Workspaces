import java.util.Scanner;
import javax.lang.model.element.Element;
import javax.xml.stream.events.EndElement;
public class vecto 
{
    public static Scanner scn=new Scanner(System.in); 
    public static void main(String[] args)
    {
        int [] vec = new int[10];
        vectin(vec);
        vectdi(vec);

    }
    public static void vectin(int [] vec)
    {
        System.out.println("Enter the in value");
        System.out.println();
        for(int i=0; i<vec.length; i++)
    {
        vec[i]=scn.nextInt();
    }
    }
    public static void vectdi(int [] vec)
    {
        System.out.print("outting the value");
        System.out.println();
        for(int i=0; i<vec.length; i++)
    {
        System.out.println(vec[i]);
    }
    }
}