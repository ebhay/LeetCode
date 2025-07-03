class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char, int> mp;
        int start=0,end=0,len=0,ml=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(mp.find(ch)!=mp.end()  && mp[ch] >= start){
                start=mp[ch]+1;
            }
            else{
                len=i-start+1;
                ml=max(ml,len);
            }
            mp[ch]=i;
        }
        return ml;
    }
};