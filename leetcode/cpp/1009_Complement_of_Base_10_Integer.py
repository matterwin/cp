class Solution:
    def bitwiseComplement(self, n: int) -> int:
        if n == 0:
            return 1

        msb = n.bit_length() - 1

        mask = ~((1 << (msb + 1)) - 1)

        result = n | mask

        return ~result
