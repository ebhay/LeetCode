class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==0 || strs==null)
        return "";
        Arrays.sort(strs);
        String fir=strs[0];
        String ed=strs[strs.length-1];
        int i=0;
        while(i<fir.length() && i<ed.length() && fir.charAt(i)==ed.charAt(i))
        i++;


        return fir.substring(0,i);
    }
}