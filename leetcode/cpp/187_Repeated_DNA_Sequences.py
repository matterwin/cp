from collections import defaultdict

class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        mp = defaultdict(int)

        for i in range(len(s) - 9):
            mp[s[i:i+10]] += 1

        return [k for k, v in mp.items() if v > 1]


