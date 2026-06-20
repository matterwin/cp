class Solution:
    def largeGroupPositions(self, s: str) -> List[List[int]]:
        ret = []
        l = 0

        for r in range(len(s)):
            if r == len(s) - 1 or s[r] != s[r + 1]:

                if r - l + 1 >= 3: ret.append([l, r]);
                l = r + 1

        return ret
