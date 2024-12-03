class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0, no_rob = 0;
        for(int i = 0; i < nums.size(); i++) {
            int newRob = no_rob + nums[i];
            int new_No_Rob = max(no_rob, rob);
            rob = newRob;
            no_rob = new_No_Rob;
        }
        return max(rob, no_rob);
    }
};