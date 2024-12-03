class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count = 0;
        for(int i : nums) count ^= i;
        return count;
    }
};