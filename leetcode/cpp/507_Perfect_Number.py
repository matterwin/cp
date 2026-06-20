class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        if num == 1: return False
        total = 0

        for i in range(1, int(num ** 0.5) + 1):
            if num % i == 0:
                pair = num // i

                if pair == num:
                    pair = 0

                total += i + pair

        return total == num
