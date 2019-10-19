import java.util.Scanner;
public class pattern
{
    public static Scanner scn=new Scanner(System.in); 
    pair(int arr[],int data)
    {
        int li=0;
        int ri=arr.length-1;
        while(li<=ri)
        {
            int sum=arr[li]+arr[ri];
            if(sum=data)
            {
                System.out.print("(" +arr[li] +"," + arr[ri]+ "),");
                li++;
                ri--;
            }else if(sum<data) li++;
            else ri--;
        }
    }

    public static void main(String[] args)
    {
        int [] arr={1,2,3,4,10,12,14,15};
        pair(arr,data);

    }

}