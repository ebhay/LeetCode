class Solution {
    int countFreq(int[] arr, int t) {
        // code here
        int s=0, h=arr.length-1;
        while(s<=h){
            int mid=s+(h-s)/2;
            if(arr[mid]==t){
               int l=mid-1, r=mid+1;
               int c=1;
               while(l>=0 && arr[l]==t){
               c++;l--;}
               while(r<arr.length && arr[r]==t){
               c++;r++;}
               
               return c;
            }
            else if(arr[mid]>t)
            h=mid-1;
            else
            s=mid+1;
        }
        return 0;
    }
}
