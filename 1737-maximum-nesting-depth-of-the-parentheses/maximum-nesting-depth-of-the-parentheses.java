class Solution {
    public int maxDepth(String s) {
        int depth=0,maxd=-1;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='(')
            depth++;
            else if(s.charAt(i)==')')
            depth--;
            if(maxd<depth) maxd=depth;
        }
        return maxd;
    }
}