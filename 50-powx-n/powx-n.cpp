class Solution {
public:
    double myPow(double x, int a) {
        long long n = a; // use long long
        double b = 0, ans = 1;
        if (x == 0)
            return 0;
        else if (x == 1)
            return x;
        else if (n == 1)
            return x;
        else if (x == -1 && n % 2 == 0)
            return 1;
        else if (x == -1 && n % 2 != 0)
            return -1;
        else {
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
    }
};
