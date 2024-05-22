class Solution {
    int getVal(char a){
        switch (a){
            case 'I':
            return 1;
            case 'V':
            return 5;
            case 'X':
            return 10;
            case 'L':
            return 50;
            case 'C':
            return 100;
            case 'D':
            return 500;
            case 'M':
            return 1000;
            default : return 0;
        }
    }
    public int romanToInt(String s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            if((i+1)<n){
                if(getVal(ch)>=getVal(s.charAt(i+1))){
                    sum=sum+getVal(ch);
                }
                else{
                    sum=sum-getVal(ch);
                }
            }
            else{
                sum=sum+getVal(ch);
            }
        }
        return sum;
    }
}