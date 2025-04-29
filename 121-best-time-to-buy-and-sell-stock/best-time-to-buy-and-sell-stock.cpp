class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int MP=0,price=arr[0];
    for(int i=1;i<arr.size();i++){
        MP=max(MP,-price+arr[i]);
        price=min(price,arr[i]);
    }
    return MP;
    }
};