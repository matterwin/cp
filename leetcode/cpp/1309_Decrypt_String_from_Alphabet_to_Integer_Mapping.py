class Solution:
    def freqAlphabets(self, s: str) -> str:
        ret = []
        i = 0

        while i < len(s):
            if i + 2 < len(s) and s[i + 2] == '#':
                # two-digit number like "10#"
                num = int(s[i:i+2])
                ret.append(chr(ord('a') + num - 1))
                i += 3
            else:
                # single digit
                num = int(s[i])
                ret.append(chr(ord('a') + num - 1))
                i += 1

        return ''.join(ret)
