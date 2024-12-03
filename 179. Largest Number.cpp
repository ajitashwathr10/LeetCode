class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> large;
        for(int i : nums) large.push_back(to_string(i));
        sort(large.begin(), large.end(), [](const string &a, const string &b) {
            return ((b + a) < (a + b));
        });
        if(large[0] == "0") return "0";
        string largest;
        for(string i : large) {
            largest += i;
        }
        return largest;
    }
};