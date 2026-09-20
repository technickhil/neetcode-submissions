class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for(const auto& s : strs) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            ans[sortedS].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& pair: ans) {
            result.push_back(pair.second);
        }
        return result;
    }
};
