class Solution {
    public String largestOddNumber(String num) {
        int n;
        String max="";
        for(int i=0;i<num.length();i++){
            n=Integer.valueOf(num.charAt(i));
            if(n%2!=0)
            max=num.substring(0,i+1);
        }
        return max;
    }
}