import numpy as np

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:

        newWord = ''
        min_len = min(len(word1), len(word2))

        count = 0 
        for i in range(min_len):
            newWord += word1[i]
            newWord += word2[i]
            count+=1
        
        
        if min_len == len(word1):
            newWord += word2[count::]
        else:
            newWord += word1[count::]
        
        return newWord


        

            
