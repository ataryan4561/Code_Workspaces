import javax.lang.model.util.ElementScanner6;

public class binsearch {
    public static void main(String[] args) {
        int[] arr={-2,-1,-1,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,3,4,5,6,7,12,18,19,20,22,28,30,48};
        System.out.println(BS(arr,2));
    }

    public static int BS(int[] arr,int data)
    {
        int li=0;
        int ri=arr.length-1;
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