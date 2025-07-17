class Solution {
    public String reverseWords(String s) {
        String[] str=s.split(" ");
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<str.length;i++){
            if(i==str.length-1)
            
            sb.append(new StringBuilder(str[i]).reverse());
            else
            sb.append(new StringBuilder(str[i]).reverse()+" ");
        }
        return sb.toString();
    }
}