class Solution {
    String checker(String common,String str){
        int len = Math.min(common.length(), str.length());
        StringBuilder s = new StringBuilder();
        for(int i=0;i<len;i++ ){
            if(common.charAt(i)==str.charAt(i)){
                s.append(common.charAt(i));
            }
            else {
                break;}
        }
        return s.toString();
    }
    public String longestCommonPrefix(String[] strs) {
       int len=strs.length;
       String common=strs[0];
       for(int i=1;i<len;i++){
        common=checker(common,strs[i]);
       }
        return common;
    }
}