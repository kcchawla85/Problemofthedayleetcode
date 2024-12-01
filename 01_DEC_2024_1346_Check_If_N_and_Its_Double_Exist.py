class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        arr.sort()
        for i in range(len(arr)):
            for j in range (i+1, len(arr)):
                if arr[i]*2 == arr[j] or arr[i] == 2*arr[j]:
                    return True
        return False
