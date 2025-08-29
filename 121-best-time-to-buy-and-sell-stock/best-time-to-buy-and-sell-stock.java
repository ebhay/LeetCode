class Solution {
    public int maxProfit(int[] prices) {
        int maxp=0,mp=prices[0];
        for(int i=1;i<prices.length;i++){
            maxp=Math.max(maxp,prices[i]-mp);
            mp=Math.min(mp,prices[i]);
        }
        return maxp;
    }
}