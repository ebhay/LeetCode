class Solution {
    public String reverseWords(String s) {
        String[] str;
        str= s.split("\\s+");
        StringBuilder a=new StringBuilder();

        for(int i=str.length-1;i>=0;i--){
            a.append(str[i]+" ");
        }
        
        return a.toString().trim();
    }
}