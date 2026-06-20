class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        freq = [] * 51
        ret = 0
        for n in nums:
            freq[n] += 1
            if freq[n] == 2:
                ret ^= n

        return ret
