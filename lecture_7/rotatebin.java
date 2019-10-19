import javax.lang.model.util.ElementScanner6;
import java.util.Scanner;

public class rotatebin {
    public static Scanner scn=new Scanner(System.in); 
    public static void main(String[] args) {
        int[] arr={5,6,7,8,9,10,1,2,3};
        int g=BSE(arr,2,0,arr.length-1);
        if((BS(arr,2,0,g))==-1)
        {
        System.out.print(BS(arr,2,g,arr.length-1));
        }
        if((BS(arr,2,g,arr.length-1))==-1)
        {
        System.out.print(BS(arr,2,0,g));
        }
    }
    public static int BSE(int[] arr,int data,int li,int ri)
    {
        while(li!=ri)
        {
            int mid=(li+ri)/2;
            if((arr[mid]-arr[li])<0)
            {
                ri=mid;
            } 
            if((arr[ri]-arr[mid])<0)
            {
                li=mid;
            }
        }
        if(data-li>0)
            return li;
            else return li-1;
    }
    public static int BS(int[] arr,int data,int li,int ri)
    {
        while(li<=ri)
        {
            int mid=(li+ri)/2;
            if(arr[mid]==data)
            return mid;
            else if(arr[mid]<data)
            li=mid+1;
            else ri=mid-1;
        }
        return -1;
    } 
}