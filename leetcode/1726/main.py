"""
@url: https://leetcode.com/problems/tuple-with-same-product/description/
"""

from typing import List

class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        """
        Given a list of distinct numbers, find the number of tuples that have the same product.

        >>> s = Solution()
        >>> s.tupleSameProduct([2,3,4,6])
        8
        >>> s.tupleSameProduct([1,2,4,5,10])
        16
        """
        from collections import defaultdict
        from itertools import combinations

        product = defaultdict(int)
        for a, b in combinations(nums, 2):
            product[a * b] += 1

        return sum(v * (v - 1) * 4 for v in product.values())
        


if __name__ == "__main__":
    import doctest
    doctest.testmod(verbose=True)
