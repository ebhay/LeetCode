class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num1, vector<int>& num2) {
        unordered_map <int, int> mp;
        stack <int> sp;
        vector <int> a (num1.size());

        for(int i=num2.size()-1;i>=0;i--){
            while(!sp.empty() && sp.top()<=num2[i]){
                sp.pop();
            }
            if(sp.empty())
                mp[num2[i]]=-1;
            else{
                mp[num2[i]]=sp.top();
            }
            sp.push(num2[i]);
        }
        for(int i=0;i<num1.size();i++){
             auto it = mp.find(num1[i]); // Find key "banana"
             a[i]=it->second;
        }
        return a;
    }
};