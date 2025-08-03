class Solution {
    public int search(int [] arr,int t, boolean first){
        int s=0,h=arr.length-1;
        int pos=-1;
        while(s<=h){
            int mid=s+(h-s)/2;
            if(arr[mid]>t)
            h=mid-1;
            else if(arr[mid]<t)
            s=mid+1;
            else// equal
            {
                if(first)
                h=mid-1;
                else
                s=mid+1;
                pos=mid;
            }
        }
        return pos;
    }
    public int[] searchRange(int[] nums, int target) {
        int [] arr=new int[2];
        arr[1]=search(nums,target, false);
        arr[0]=search (nums,target,true);
        return arr;
    }
}