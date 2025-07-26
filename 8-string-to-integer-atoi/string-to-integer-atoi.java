class Solution {
    public int myAtoi(String a) {
        
        String s=a.trim();
        if(s.length()==0)
        return 0;
        int sign=1;
        int i=0;
        if(s.charAt(i)=='-'){
            sign=-1;i++;}
        else if(s.charAt(i)=='+'){
            sign=1;i++;}

        int num=0;
        while(i<s.length() && s.charAt(i)-'0'>=0 && s.charAt(i)-'0'<=9 ){
            if(num>(Integer.MAX_VALUE-(s.charAt(i)-'0'))/10){
                if(sign==-1)
                return Integer.MIN_VALUE;
                else
                return Integer.MAX_VALUE;
            }

            num=num*10+(s.charAt(i)-'0');
            i++;
            
            
        }
        if(sign==-1)
        return num*-1;
        return num;

    }
}