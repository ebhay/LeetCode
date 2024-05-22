class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
         return false;
        int n=x,s=0;
        while(n!=0){
            int rem=n%10;
            n=n/10;
            s=s*10+rem;
        }
        return (x==s);
    }
}