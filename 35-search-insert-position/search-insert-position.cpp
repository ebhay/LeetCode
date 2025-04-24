class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int l=0,h=arr.size()-1,mid,ans=arr.size();
        while(l<=h){
           mid=(l+h)/2;
           if(arr[mid]==target){
                return mid;
           }
           else if(arr[mid]<target){
                l=mid+1;
           }
           else
           h=mid-1;
        }
        return l;
    }
};