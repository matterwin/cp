class Solution:
    def sortString(self, s: str) -> str:
        freq = [0] * 26

        for c in s:
            freq[ord(c) - ord('a')] += 1

        cnt = len(s)
        result = []

        while cnt > 0:
            for i in range(26):
                if cnt == 0:
                    break
                if freq[i] > 0:
                    freq[i] -= 1
                    cnt -= 1
                    result.append(chr(ord('a') + i))

            for i in range(25, -1, -1):
                if cnt == 0:
                    break
                if freq[i] > 0:
                    freq[i] -= 1
                    cnt -= 1
                    result.append(chr(ord('a') + i))

        return "".join(result)
