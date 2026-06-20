class Solution:
    def minChanges(self, n: int, k: int) -> int:
        ret = 0

        for i in range(32):
            n_bit = (n >> i) & 1
            k_bit = (k >> i) & 1

            if n_bit != k_bit:
                if n_bit != 1:
                    return -1
                ret += 1

        return ret
