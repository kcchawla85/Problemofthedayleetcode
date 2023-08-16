class Solution {
public:
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return false;
        vector<bool> dp = {true, false, n > 1 ? nums[0] == nums[1] : false};
        for (int i = 2; i < n; i++) {
            bool current_dp = (nums[i] == nums[i-1] && dp[1]) || 
                              (nums[i] == nums[i-1] && nums[i] == nums[i-2] && dp[0]) ||
                              (nums[i] - nums[i-1] == 1 && nums[i-1] - nums[i-2] == 1 && dp[0]);
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = current_dp;
        }
        return dp[2];
    }
};
// link: https://leetcode.com/problems/check-if-there-is-a-valid-partition-for-the-array/solutions/3901261/100-o-n-dynamic-programming-sliding-window-video-optimal-solution/