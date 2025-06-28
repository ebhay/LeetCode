class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int unique=0,len=0,start=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(mp.find(ch)!=mp.end() && mp[ch]>=start){ //element is duplicate
                start=mp[ch]+1;
            }
            else{
                //unique element
                mp.insert({ch,i});
                len=i-start+1;
                unique=max(unique,len);
            }
              mp[ch]=i;
        }
        return unique;
    }
};