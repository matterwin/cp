from collections import Counter
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        mp = Counter()

        for word in s1.split():
            mp[word] += 1

        for word in s2.split():
            mp[word] += 1

        ret = []
        for word, cnt in mp.items():
            # appears only once across both sentences
            if cnt == 1:
                ret.append(word)

        return ret
