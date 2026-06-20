from typing import List

class Solution:
    def rec(self, n: int, dp: List[int]) -> int:
        if dp[n] != -1:
            return dp[n]

        best = 0

        for i in range(1, n):
            left = max(i, self.rec(i, dp))
            right = max(n - i, self.rec(n - i, dp))

            best = max(best, left * right)

        dp[n] = best
        return dp[n]

    def integerBreak(self, n: int) -> int:
        dp = [-1] * (n + 1)
        dp[1] = 1

        return self.rec(n, dp)

# or

class Solution:
    def integerBreak(self, n: int) -> int:
        if n <= 3:
            return n - 1
        res = 3 ** (n // 3)

        if (n % 3) == 1:
            return (res // 3) * 4

        return res * max(1, n % 3)

