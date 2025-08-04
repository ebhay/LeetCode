class Solution {
    public int findKRotation(int arr[]) {
        // Code here
        if(arr.length==1)
        return 0;
        int s=0,h=arr.length-1;
        while(s<h){
            int mid=s+(h-s)/2;
            if(arr[mid]<arr[h]){
                h=mid;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
}