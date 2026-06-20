class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        MAXV = 50000

        freq = [0] * MAXV
        first = [-1] * MAXV
        last = [-1] * MAXV

        deg = 0

        for i, x in enumerate(nums):
            if first[x] == -1:
                first[x] = i

            last[x] = i
            freq[x] += 1

            deg = max(deg, freq[x])

        ans = float('inf')

        for x in range(MAXV):
            if freq[x] == deg:
                ans = min(ans, last[x] - first[x] + 1)

        return ans
