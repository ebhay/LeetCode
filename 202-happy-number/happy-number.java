class Solution {
    public int squaresum(int n){
        int sum=0;
        while(n!=0){
            int rem=n%10;
            sum+=rem*rem;
            n=n/10;
        }
        return sum;
    }

    public boolean isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=squaresum(slow);
            fast=squaresum(squaresum(fast));
        }
        while(slow!=fast);

        if(slow==1)
        return true;
        return false;
    }
}