# https://leetcode.com/problems/move-pieces-to-obtain-a-string/solutions/6114504/100-beats-short-simple
class Solution:
    def canChange(self, start: str, target: str) -> bool:
        if start == target:
            return True
        waitL = 0   
        waitR = 0    

        for curr, goal in zip(start, target):
            if curr == 'R':
                if waitL > 0:
                    return False
                waitR += 1  
            if goal == 'L':
                if waitR > 0:
                    return False
                waitL += 1
            if goal == 'R':
                if waitR == 0:
                    return False
                waitR -= 1 
            if curr == 'L':
                if waitL == 0:
                    return False
                waitL -= 1    
        return waitL == 0 and waitR == 0
