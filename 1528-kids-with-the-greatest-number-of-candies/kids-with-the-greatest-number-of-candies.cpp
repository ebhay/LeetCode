class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> res;
        int maxc=candies[0];
        for(int i=1;i<candies.size();i++){
            if(candies[i]>maxc)
            maxc=candies[i];
        }
         for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxc)
            res.push_back(true);
            else
            res.push_back(false);
        }
        return res;
    }
};