class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& num2) {
        stack <int> sp;
        vector <int> a (num2.size());

        for(int i=2*num2.size()-1;i>=0;i--){
            while(!sp.empty() && sp.top()<=num2[i%num2.size()]){
                sp.pop();
            }
            if(sp.empty())
                a[i%num2.size()]=-1;
            else{
                a[i%num2.size()]=sp.top();
            }
            sp.push(num2[i%num2.size()]);
        }
        
        return a;
    }
};