class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int res=arr[0],c=0;
        for(int i=1;i<arr.size();i++){
            if(res>arr[i]){
                c++;
            }
            else{
                res=arr[i];
                c=1;
            }
            if(c==k)
            break;
        }
        return res;
    }
};