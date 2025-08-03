class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int s=0,h=arr.length-1;
        while(s<h){
            int mid=s+(h-s)/2;
            if(arr[mid]>arr[mid+1]) //max in reducing series
            h=mid;
            else // arr[mid+1]> arr[mid] increasing series
            s=mid+1;
        }
        return s;
    }
}