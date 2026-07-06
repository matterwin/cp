class Solution:
	def isVowel(self, c: str) -> bool:
		return c.lower() in "aeiou"

	def halvesAreAlike(self, s: str) -> bool:
		count = 0
		n = len(s)

		for i, c in enumerate(s):
			if not self.isVowel(c):
				continue

			if i < n // 2:
				count += 1
			else:
				count -= 1

		return count == 0





from Collections import Counter

class Solution:
    def halvesAreAlike(self, s: str) -> bool:

        a = Counter(s[:len(s)//2])
        b = Counter(s[len(s)//2:])
        vowels = ['a','e','i','o','u','A','E','I','O','U']
        ans1 = sum(b[ch] for ch in vowels)
        ans2 = sum(a[ch] for ch in vowels)

        return ans1 == ans2
