class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs==null || strs.length==0)
        return "";
        Arrays.sort(strs);//length wise sorted
        String str=strs[0];
        String edl=strs[strs.length-1];
        int i=0;
        while (i < str.length() && i < edl.length() && str.charAt(i) == edl.charAt(i)) {
            i++;
        }

        return str.substring(0,i);
    }
}