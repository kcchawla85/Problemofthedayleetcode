# https://leetcode.com/problems/rotating-the-box/solutions/6073932/simple-bruteforce-solution-beats-100-c-java-python-javascript
class Solution:
    def rotateTheBox(self, box: List[List[str]]) -> List[List[str]]:
        row, col = len(box), len(box[0])
        box_90 = [[""] * row for _ in range(col)]
        #simulate gravity
        for i in range(row):
            cell = col-1
            for j in range (col-1,-1,-1):
                if box[i][j]=='*':
                    cell=j-1
                elif box[i][j]=='#':
                    box[i][j]='.'
                    box[i][cell]='#'
                    cell-=1
        #rotate the box 90 degrees clockwise
        for i in range (row):
            for j in range(col):
                box_90[j][row-i-1]=box[i][j]
        return box_90
