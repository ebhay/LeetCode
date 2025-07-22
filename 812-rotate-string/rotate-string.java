class Solution {
    public boolean rotateString(String s, String goal) {
        StringBuilder str=new StringBuilder(s);
        if(s.equals(goal))
        return true;
        if(s.length()!=goal.length())
        return false;

        for(int i=0;i<str.length();i++){
            char ch=str.charAt(0);
            str.deleteCharAt(0);
            str.append(ch);
            if(str.toString().equals(goal))
            return true;
        }
        return false;
    }
}