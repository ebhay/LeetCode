class Solution {
    public String removeOuterParentheses(String s) {
       int b=0;
       String str="";
       for(int i=0;i<s.length();i++){
        if(s.charAt(i)=='('){
            b++;
            if(b>1){
                str+="(";
            }
        }
        else{
            b--;
            if(b>0){
                str+=")";
            }
        }
       
       } 
        return str;
    }
}