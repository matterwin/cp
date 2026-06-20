class Solution:
    def checkRecord(self, s: str) -> bool:
        lcnt, acnt = 0, 0
        for c in s:
            if c == 'A':
                acnt += 1
                if acnt == 2: return False
                lcnt = 0
            elif c == 'L':
                lcnt += 1
                if lcnt == 3: return False
            else:
                lcnt = 0

        return True
