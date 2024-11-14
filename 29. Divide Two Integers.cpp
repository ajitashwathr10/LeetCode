class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        long long absDividend = llabs(dividend);
        long long absDivisor = llabs(divisor);

        long long quotient = 0;
        while (absDividend >= absDivisor) {
            int shift = 0;
            while (absDividend >= (absDivisor << shift)) {
                shift++;
            }
            absDividend -= (absDivisor << (shift - 1));
            quotient += (1 << (shift - 1));
        }
        return sign * quotient;
    }
};