#https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/solutions/6008345/beats-100-00-for-loop-explained-with-example
class Solution:
    def minChanges(self, s: str) -> int:
        count=0
        i=0
        while i<len(s)-1:
            if s[i]!=s[i+1]:
                count+=1
            i+=2
        return count
