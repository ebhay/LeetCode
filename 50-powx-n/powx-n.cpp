class Solution {
public:
    double myPow(double x, int a) {
        long n = a; // use long long
        double b = 0, ans = 1;
        
            if (n < 0) {
                x = 1 / x;
                n = -n;
            }
            while (n != 0) {
                b = n % 2;
                n = n / 2;
                if (b == 1) {
                    ans *= x;
                }
                x *= x;
            }
            return ans;
        
    }
};
