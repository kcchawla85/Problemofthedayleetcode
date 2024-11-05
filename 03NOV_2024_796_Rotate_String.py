#https://leetcode.com/problems/rotate-string/solutions/5999665/beats-100-short-and-simple-o-n-list-most-common-string-interview
class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        return goal in s+s
