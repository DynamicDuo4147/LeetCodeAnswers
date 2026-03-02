class Solution:
    def reverseVowels(self, s: str) -> str:
        givenWord = list(s)
        vowelList = set("AaEeIiOoUu")
        reverseVowels = []
        z = 0

        for i, char in enumerate(givenWord):
            if char in vowelList:
                reverseVowels.append(char)
                givenWord[i] = 0

        reverseVowels.reverse()        

        for j, char in enumerate(givenWord):
            if (char == 0):
                givenWord[j] = reverseVowels[z]
                z += 1

        givenWord = ''.join(givenWord)
        return givenWord