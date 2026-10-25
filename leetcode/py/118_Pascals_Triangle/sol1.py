class Solution:
    def generate(self, rows: int) -> list[list[int]]:
        ret = []

        for r in range(rows):
            row = [1] * (r + 1)
            length = len(row)

            for i in range(length):
                if i == 0 or i == length - 1:
                    row[i] = 1
                else:
                    row[i] = ret[r - 1][i] + ret[r - 1][i - 1]

            ret.append(row)

        return ret