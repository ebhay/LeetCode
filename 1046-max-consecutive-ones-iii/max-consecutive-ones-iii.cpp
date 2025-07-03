class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int start=0,maxlen=0;
        int z=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                z++;
                while(z>k){
                    if(arr[start]==0)
                    z--;
                    start++;
                }
            }
            maxlen=max(maxlen,i-start+1);
        }
        return maxlen;
    }
};