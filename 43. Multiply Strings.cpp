class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") {
            return "0";
        }
        int m = num1.size();
        int n = num2.size();
        vector<int> result(m + n,0);
        for(int i = m-1; i >= 0; i--) {
            for(int j = n-1; j >= 0; j--) {
                int temp = (num1[i] - '0') * (num2[j] - '0');
                int sum = temp + result[i + j + 1];
                result[i+j+1] = sum % 10;
                result[i+j] += sum / 10;
            }
        }
        string s = "";
        for (int num : result) {
            if(!(s.empty() && num == 0)) {
                s.push_back(num + '0');
            }
        }
        return s.empty() ? "0" : s;
    }
};