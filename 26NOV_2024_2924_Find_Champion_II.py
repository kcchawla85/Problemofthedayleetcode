# https://leetcode.com/problems/find-champion-ii/solutions/6083421/video-beats-100-simple-short
class Solution:
    def findChampion(self, n: int, edges: List[List[int]]) -> int:
        isUndefeated = [True] * n
        
        for winner, loser in edges:
            isUndefeated[loser] = False
            
        champion = -1
        championCount = 0
        
        for team in range(n):
            if isUndefeated[team]:
                champion = team
                championCount += 1
                
        if championCount == 1:
            return champion
            
        return -1
