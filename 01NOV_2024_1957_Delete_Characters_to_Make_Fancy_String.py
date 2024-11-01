class Solution:
    def makeFancyString(self, s: str) -> str:
        res = ""
        for c in s:
            if len(res)>=2 and c == res[-1] and c == res[-2]:
                continue
            else:
                res += c
        return res
