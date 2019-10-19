public class binsearch2 {
    public static void main(String[] args) {
        int[] arr={-2,-1,-1,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,3,4,5,6,7,12,18,19,20,22,28,30,48};
        System.out.println(BSUB(arr,2));
        System.out.println(BSLB(arr,2));
    }

    public static int BSUB(int[] arr,int data)
    {
        int li=0;
        int ri=arr.length-1;
        while(li<=ri)
        {
            int mid=(li+ri)/2;
            if(arr[mid]==data)
            {
            if(mid+1 <arr.length && arr[mid]==arr[mid+1] )
                li=mid+1;
            else 
            return mid;
            }
            else if(arr[mid]<data)
            li=mid+1;
            else ri=mid-1;
        }
        return -1;
    }
    public static int BSLB(int[] arr,int data)
    {
        int li=0;
        int ri=arr.length-1;
        while(li<=ri)
        {
            int mid=(li+ri)/2;
            if(arr[mid]==data)
            {
            if(mid-1 <arr.length && arr[mid]==arr[mid-1] )
                ri=mid-1;
            else 
            return mid;
            }
            else if(arr[mid]<data)
            li=mid+1;
            else ri=mid-1;
        }
        return -1;
    }
    
}