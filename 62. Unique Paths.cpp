class Solution {
public:
    int uniquePaths(int m, int n) {
        int i, j = 1;
        long ans = 1; //2 * 10^9
        for(i = m + n - 2; i >= max(m, n); i--, j++) { 
            ans = (ans * i) / j;
        }
        //(m+n-2)!/[(m-1)! * (n-1)!]: Combination equation
        return ans;
    }

};