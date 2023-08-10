class Solution {
public:
    bool solve(vector<int>& nums, int d, int p) {
        int n = nums.size();
        int c = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] - nums[i] <= d) {
                c++;
                i++; // Skip one index since no index appears more than once amongst the p pairs
            }
            if (c >= p) // Able to find p pairs
                return true;
        }
        return false;
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target)
                return true;

            if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
                lo++;
                hi--;
            } else if (nums[lo] <= nums[mid]) {
                if (nums[lo] <= target && target < nums[mid])
                    hi = mid - 1;
                else
                    lo = mid + 1;
            } else {
                if (nums[mid] < target && target <= nums[hi])
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
        }

        return false;
    }
};
