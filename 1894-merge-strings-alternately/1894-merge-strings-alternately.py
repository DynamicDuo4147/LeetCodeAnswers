class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:

        arrWord = []
        newWord = ''

        if len(word1) > len(word2):
            j = len(word2)
        else:
            j = len(word1)
        i = 0

        for i in range(j):
            arrWord.append(word1[i])
            arrWord.append(word2[i])
        
        arrWord += word1[j:] if len(word1) > len(word2) else word2[j:]
        newWord = newWord.join(arrWord)
            
        return newWord
