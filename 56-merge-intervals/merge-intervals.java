class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals,(a,b)->a[0]-b[0]);
        ArrayList<int[]> arr=new ArrayList<>();
        arr.add(intervals[0]);
        int curr=0;
        for(int i=1;i<intervals.length;i++){
            if(arr.get(curr)[1]>=intervals[i][0]) //need to be added
            {
                arr.get(curr)[1]=Math.max(arr.get(curr)[1],intervals[i][1]);
            }
            else {
                arr.add(intervals[i]);
                curr++;
            }
        }
        return arr.toArray(new int [arr.size()][]);
    }
}