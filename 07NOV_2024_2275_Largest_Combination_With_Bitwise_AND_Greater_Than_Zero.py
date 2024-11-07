# https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/solutions/6017268/easiest-solution-beats-100-c-java-python3-javascript
class Solution:
    def largestCombination(self, candidates: List[int]) -> int:
        ans = 0
        for i in range(32):
            cnt = sum(1 for candidate in candidates if candidate & (1 << i))
            ans = max(ans, cnt)
        return ans
