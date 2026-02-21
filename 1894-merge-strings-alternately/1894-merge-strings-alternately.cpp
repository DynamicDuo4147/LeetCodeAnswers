// .cpp solution for leetcode
class Solution {
public:
    string mergeAlternately(string word1, string word2) {

    string newWord = "";
    
    int j = min(word1.length(), word2.length());

    for (int i = 0; i < j; i++){
        newWord += word1[i];
        newWord += word2[i];
    }

    newWord += (word1.length() > word2.length()) ? word1.substr(j) : word2.substr(j);
    
    return newWord;
    }
};
