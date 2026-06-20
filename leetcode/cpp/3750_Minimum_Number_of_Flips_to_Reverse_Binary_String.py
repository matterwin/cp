class Solution:
    def minimumFlips(self, n: int) -> int:
        bn = [(n >> i) & 1 for i in range(32)] 
        
        l = n.bit_length() - 1
        r = 0

        flips = 0

        while l > r:
            if bn[l] != bn[r]:
                flips += 2
            l -= 1
            r += 1

        return flips
