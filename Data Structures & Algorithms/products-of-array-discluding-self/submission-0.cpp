class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefStart(n);
        vector<int> prefEnd(n);
        vector<int> ans(n);

        prefStart[0] = 1;
        prefEnd[n-1] = 1;

        for(int i=1; i<n; i++) {
            prefStart[i] = nums[i-1] * prefStart[i-1];
        }

        for(int i=n-2; i>= 0; i--) {
            prefEnd[i] = nums[i+1] * prefEnd[i+1];
        }

        for(int i=0; i<n; i++) {
            ans[i] = prefStart[i] * prefEnd[i];
        }

        return ans;
    }
};
