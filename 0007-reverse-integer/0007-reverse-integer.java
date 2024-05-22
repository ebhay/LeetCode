class Solution {
    public int reverse(int x) {
        int r, sum = 0;

        while (x != 0) {
            r = (x % 10);
            x = x / 10;
            if (sum > (Integer.MAX_VALUE/10) || sum < (Integer.MIN_VALUE/10))
                return 0;
                
            sum = sum * 10 + r;
        }
        return sum;
    }
}