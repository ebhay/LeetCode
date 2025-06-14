class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums,                                   vector<vector<int>>& queries) {
        vector <int> res;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0)
                sum += nums[i];
        }
        for (int i = 0; i < queries.size(); i++) {
            int init = nums[queries[i][1]];
            if(init%2==0){
                sum=sum-init;
            }
            
            nums[queries[i][1]] += queries[i][0];
            if (nums[queries[i][1]] % 2 == 0){
                sum+= nums[queries[i][1]];
            }
            
            res.push_back(sum);
        }
        return res;
    }
};