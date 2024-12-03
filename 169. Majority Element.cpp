class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int res = 0, maj = 0;
        for(int n : nums) {
            hash[n] = 1 + hash[n];
            if(hash[n] > maj) {
                res = n;
                maj = hash[n];
            }
        }
        return res;
        
    }
};