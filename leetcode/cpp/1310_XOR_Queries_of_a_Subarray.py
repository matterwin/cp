class Solution:
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
        n = len(arr)
        
        prefix = [0] * n
        prefix[0] = arr[0]

        for i in range(1, n):
            prefix[i] = prefix[i - 1] ^ arr[i]

        ans = []

        for left, right in queries:
            if left == 0:
                ans.append(prefix[right])
            else:
                ans.append(prefix[right] ^ prefix[left - 1])
        
        return ans


class Solution:
    def xorQueries(self, arr: list[int], queries: list[list[int]]) -> list[int]:
        arr = list(accumulate(arr, xor, initial = 0))
        return [arr[l]^arr[r+1] for l,r in queries]
