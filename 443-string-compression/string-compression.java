class Solution {
    public int compress(char[] chars) {
        int res = 0;//read i, res for write
        for (int i = 0; i < chars.length; i++) {
            char ch = chars[i];
            int count = 1;
            if (i + 1 < chars.length && ch == chars[i + 1]) {
                count = 1;
                while (i + 1 < chars.length && ch == chars[i + 1]) {
                    i++;
                    count++;
                }
            }
            chars[res] = ch;
            res++;
            if (count > 1) {
                for (char c : String.valueOf(count).toCharArray()) {
                    chars[res++] = c;
                }
            }

        }
        return res;
    }
}