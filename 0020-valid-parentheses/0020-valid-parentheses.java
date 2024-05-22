import java.util.Stack;
class Solution {
    Stack<Character> stack = new Stack<>();

    public boolean isValid(String s) {
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s.charAt(i)=='('||s.charAt(i)=='{'||s.charAt(i)=='[')
            stack.push(s.charAt(i));
            else{
                if (stack.isEmpty()) {
                    return false; // More closing brackets than opening brackets
                }
                char ch=stack.pop();
                if(s.charAt(i)==')' && ch!='(')
                return false;
                
                if(s.charAt(i)=='}' && ch!='{')
                return false;
                
                if(s.charAt(i)==']' && ch!='[')
                return false;
            }
        }
        return stack.isEmpty();
    }
}