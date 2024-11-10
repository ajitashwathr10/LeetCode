class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, maxArea = 0;
        while(left < right) {
            int cur = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, cur);
            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxArea;

    }
};