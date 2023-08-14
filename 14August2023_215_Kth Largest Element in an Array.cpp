class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};
//link: https://leetcode.com/problems/kth-largest-element-in-an-array/solutions/3906330/5-lines-code-and-2-lines-code-multiple-approaches-c-java-python/
