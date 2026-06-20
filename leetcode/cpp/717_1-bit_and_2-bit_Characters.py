class Solution:
    def isOneBitCharacter(self, bits: list[int]) -> bool:
        flag = False

        for bit in bits[:-1]:
            if bit == 1:
                flag = not flag
            elif flag:
                flag = False

        return not flag
