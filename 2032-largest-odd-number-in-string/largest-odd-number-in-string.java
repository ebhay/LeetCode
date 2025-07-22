class Solution {
    public String largestOddNumber(String num) {
        String max="";
        for(int i=0;i<num.length();i++){
            
            if(Integer.valueOf(num.charAt(i))%2!=0)
            max=num.substring(0,i+1);
        }
        return max;
    }
}