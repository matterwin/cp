class Solution:
    def minFlips(self, a : int, b : int, c: int) -> int:
        ret = 0
        while a or b or c:
            rhs_a = a & 1
            rhs_b = b & 1
            rhs_c = c & 1

            if (rhs_a | rhs_b) != rhs_c:
                if rhs_c:
                    ret += 1
                else:
                    ret += rhs_a + rhs_b

            a >>= 1
            b >>= 1
            c >>= 1
        return ret

