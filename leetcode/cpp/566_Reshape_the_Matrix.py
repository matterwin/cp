class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        m, n = len(mat), len(mat[0])
        if m * n != r * c: return mat

        mat2 = [[0] * c for _ in range(r)]

        x = 0
        for i in range(m):
            for j in range(n):
                mat2[x // c][x % c] = mat[i][j]
                x += 1

        return mat2

