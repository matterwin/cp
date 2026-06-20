class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        vowels = set("aeiouAEIOU")

        return " ".join(
            (
                (word + "ma" if word[0] in vowels
                 else word[1:] + word[0] + "ma")
                 + "a" * i
            )
            for i, word, in enumerate(sentence.split(), start=1)
        )


