class Solution:
    def reverseWords(self, s: str) -> str:

        givenWord = list(s.split())
        givenWord.reverse()
        givenWord = " ".join(givenWord)

        return givenWord