# https://youtu.be/MsdLjL87BEo?si=NVn4WPT1_2dQDBE3
class Solution:
    def maxEqualRowsAfterFlips(self, matrix: List[List[int]]) -> int:
        # Two ways to flip for result?
        # Inverting matrix does nothing 
        # If two rows have same counts, then they can be made equal? no
        # If two rows are equal, or inverted
        # count max
        # can use tuple, 32 bit int not enough
        count = defaultdict(int)
        for row in matrix:
            row_key= tuple(row)
            if row[0]:
                row_key= tuple([0 if n else 1 for n in row])
            count[row_key]+=1
        return max(count.values())
