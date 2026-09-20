class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> tempMap;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            int diff = target - nums[i];
            if(tempMap.find(diff) != tempMap.end()) {
                return {tempMap[diff], i};
            }
            tempMap.insert({nums[i], i});
        }
        return {};
    }
};
