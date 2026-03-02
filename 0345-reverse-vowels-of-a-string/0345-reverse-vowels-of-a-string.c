#include <string>

class Solution {
public:
    string reverseVowels(string s) {
        list<string> givenWord;
        vector<char> vowelList = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
        vector<char> reverseVowels; 
        int z = 0; 

        for (int i = s.length() - 1; i >= 0 ; i --){
            for (int j = 0; j < vowelList.size(); j ++){
                if (s[i] == vowelList[j]){
                    reverseVowels.push_back(s[i]);
                    s[i] = 0;
                }
            }
        }

        for (int k = 0; k < s.length(); k++){
            if (s[k] == 0){
                s[k] = reverseVowels[z];
                z += 1;
            }
        }
        return s;

    }
};
