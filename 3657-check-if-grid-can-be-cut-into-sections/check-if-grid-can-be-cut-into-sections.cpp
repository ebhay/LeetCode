class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        // Sort by startx for vertical check
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            return a[0] < b[0];
        });

        res.push_back({intervals[0][0],intervals[0][2]});
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<res.back()[1]){
                res.back()[0]=min(intervals[i][0],res.back()[0]);
                res.back()[1]=max(intervals[i][2],res.back()[1]);
            }
            else{
                res.push_back({intervals[i][0],intervals[i][2]});
              
            }
        }
        if (res.size() >= 3) return true;

        res.clear();
        // Sort by startx for vertical check
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });
        res.push_back({intervals[0][1],intervals[0][3]});
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][1]<res.back()[1]){
                res.back()[0]=min(intervals[i][1],res.back()[0]);
                res.back()[1]=max(intervals[i][3],res.back()[1]);
            }
            else{
                res.push_back({intervals[i][1],intervals[i][3]});
               
            }
        }
        if (res.size() >= 3) return true;

        return false;

    }
};