class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans = "";
        sort(v.begin(), v.end());
        int len = v.size();
        string first = v[0];
        string last = v[len-1];
        for(int i = 0; i < min(first.size(), last.size()); i++) {
            if(first[i] != last[i]) {
                return ans;
            } else {
                ans += first[i];
            }
        }
        return ans;
    }
};