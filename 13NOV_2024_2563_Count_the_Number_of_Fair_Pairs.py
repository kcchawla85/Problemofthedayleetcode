#https://leetcode.com/problems/count-the-number-of-fair-pairs/solutions/6039050/simple-and-easy-solution-beats-100-binary-search-c-java-python-javascript
class Solution:
    def countFairPairs(self, nums: List[int], lower: int, upper: int) -> int:
        count=0
        nums.sort()
        for i in range(len(nums)-1):
            low_j = bisect_left(nums,lower-nums[i],i+1)
            high_j = bisect_right(nums, upper-nums[i], i+1)
            count += high_j-low_j
        return count
