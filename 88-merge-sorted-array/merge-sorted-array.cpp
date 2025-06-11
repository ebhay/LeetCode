class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m+n-1;//index
        int a1t=m-1;
        int a2t=n-1;

        while(a1t>=0 && a2t>=0){
            if(nums1[a1t]>=nums2[a2t] ){
                nums1[i]=nums1[a1t];
                a1t--;
            }
            else{
                nums1[i]=nums2[a2t];
                a2t--;
            }
            i--;
        }
        while(a2t>=0){
             nums1[i]=nums2[a2t];
                a2t--;
                i--;
        }
    }
};