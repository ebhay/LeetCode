class Solution {
    public int searchInsert(int[] arr, int t) {
        int s=0,h=arr.length-1;
        while(s<=h){
            int mid=s+(h-s)/2;
            if(arr[mid]==t)
            return mid;
            else if(arr[mid]>t)
            h=mid-1;
            else
            s=mid+1;
        }
        return s;
    }
}