class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int in=0;
        int end=nums.size()-1;
        int midhigh=nums.size()/2;
        int midlow=nums.size()/2;

        while(in<=end && midlow>=0 && midhigh<=nums.size()-1)
        {
            if(nums[in]==target) return true;
            in++;
            if(nums[end]==target) return true;
            end--;
            if(nums[midhigh]==target) return true;
            midhigh++;
            if(nums[midlow]==target) return true;
            midlow++;
        }
        return false;
        
    }
};