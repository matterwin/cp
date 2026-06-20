from typing import List

class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        xorAll = 0
        for n in nums:
            xorAll ^= n

        diff = xorAll & (-xorAll)

        a, b = 0, 0

        for n in nums:
            if n & diff:
                a ^= n
            else:
                b ^= n

        return [a, b]
