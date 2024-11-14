#https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/solutions/6042579/python-binary-search-pattern
class Solution:
    def minimizedMaximum(self, n: int, quantities: List[int]) -> int:
        def canDistribute(max_products:int)->bool:
            stores_needed = sum((quantity+max_products-1)//max_products for quantity in quantities)
            return stores_needed<=n
        left=1
        right= max(quantities)
        while left<right:
            mid=(left+right)//2
            if canDistribute(mid):
                right=mid
            else:
                left = mid+1
        return left
