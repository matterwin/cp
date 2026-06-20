class Solution:
    def countMonobit(self, n: int) -> int:
        cnt = 1
        val = 1
        while val <= n:
            cnt += 1
            val = val * 2 + 1
        return cnt

