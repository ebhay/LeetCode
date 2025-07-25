class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map <Character, Integer> map= new HashMap<>();
        int start=0, end=0;
        int maxl=0;
        for(int i=0;i<s.length();i++){
            if(map.containsKey(s.charAt(i)) && map.get(s.charAt(i)) >= start) {
                start = map.get(s.charAt(i)) + 1;
            }
            map.put(s.charAt(i),i);
            int len=i-start+1;
            if(len>maxl) maxl=len;
            
        }
        return maxl;
    }
}