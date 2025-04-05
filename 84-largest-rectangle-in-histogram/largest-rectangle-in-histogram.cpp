class Solution {
public:
    vector<int> nextSmallerElement(vector<int> &arr)
    {
        stack <int> s;
        vector <int> nse(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(!s.empty() && arr[s.top()]>=arr[i])
            s.pop();
            if(s.empty())
            nse[i]=arr.size();
            else
            nse[i]=s.top();
            s.push(i);
        }
        return nse;
    }
    vector <int> PrevSmallerElement(vector <int> &arr){
        stack<int> s;
        vector<int> pse(arr.size());
        for(int i=0;i<arr.size();i++){
            while(!s.empty() && arr[s.top()]>=arr[i])
            s.pop();
            if(s.empty())
            pse[i]=-1;
            else
            pse[i]=s.top();
            s.push(i);
        }
        return pse;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector <int> low=PrevSmallerElement(heights);
        vector <int> upper=nextSmallerElement(heights);
        int max=0;
        for(int i=0;i<heights.size();i++){
            int area=heights[i]*(upper[i]-low[i]-1);
            if(area>max)
                max=area;
        }
        return max;
    }
};