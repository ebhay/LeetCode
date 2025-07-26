class Solution {
    public int subarraySum(int[] nums, int k) {
        Map <Integer,Integer> map=new HashMap<>();
        map.put(0,1);
        int csum=0;
        int res=0;
        for(int i=0;i<nums.length;i++){
            csum+=nums[i];
            if(map.containsKey(csum-k))
            res+=map.get(csum-k);
            map.put(csum,map.getOrDefault(csum,0)+1);
        }
        return res;
    }
}