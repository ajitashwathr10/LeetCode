class Solution {
public:
    int reverse(int x) {
        /* Usage of 64 bit integer */
        long r = 0;
        while(x) {
            r = r * 10 + x % 10;
            x = x / 10;
        }
        if(r > INT_MAX || r < INT_MIN) {
            return 0;
        }
        return int(r);
    }
};