class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i=0, j=arr.size()-1;
        while(i!=j){
            int ps=arr[i]+arr[j];
            if(ps>target){
                j--;
            }
            else if(ps<target){
                i++;
            }
            else{
                return {i+1,j+1};
            }
        }
         return {-1, -1}; 
    }
};