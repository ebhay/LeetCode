#include <stack>
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector <int> result(temp.size());
        stack <int> nle;
        for(int i=temp.size()-1;i>=0;i--){
            while(!nle.empty() && temp[nle.top()]<=temp[i])
                nle.pop();
            if(nle.empty())
                result[i]=0;
            else
                result[i]=nle.top()-i;
            nle.push(i);
        }
        return result;
    }
};