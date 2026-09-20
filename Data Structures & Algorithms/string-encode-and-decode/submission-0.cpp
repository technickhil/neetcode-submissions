class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto i:strs) {
            for(auto j:i) {
                ans.push_back(j);
            }
            ans.push_back((char)0xFFFFFF);
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string curr = "";
        for(int i=0; i<s.length();i++) {
            if(s[i] == (char)0xFFFFFF) {
                ans.push_back(curr);
                curr = "";
            }
            else {
                curr.push_back(s[i]);
            }
        }
        return ans;
    }
};
