class Solution {
    public int totalElements(int[] arr) {
        // code here
        Map <Integer,Integer> map=new HashMap<>();
        int start=0, maxl=0;
        
        for(int i=0;i<arr.length;i++){
            int val=arr[i];
            if(map.containsKey(val))
            map.put(val,map.get(val)+1);
            else 
            map.put(val,1);
            
            while(map.size()>2){
                int j=arr[start];
                map.put(j,map.get(j)-1);
                if(map.get(j)==0)
                map.remove(j);
                start++;
            }
            int len=i-start+1;
            maxl=Math.max(maxl,len);
        }
        return maxl;
    }
}