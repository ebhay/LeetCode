class Solution {
    public String frequencySort(String s) {
      Map<Character,Integer> map=new HashMap<>();
      for(int i=0;i<s.length();i++){
            if(map.containsKey(s.charAt(i)))
            map.put(s.charAt(i),map.get(s.charAt(i))+1);
            else
            map.put(s.charAt(i),1);
      }
      List <Character> clist=new ArrayList<>(map.keySet());
      clist.sort((a,b)->map.get(b)-map.get(a));
      StringBuilder str=new StringBuilder();
      for(int i=0;i<clist.size();i++){
        int freq=map.get(clist.get(i));
        while(freq!=0){
            str.append(clist.get(i));
            freq--;
        }
      }
      return str.toString();   
    }
}