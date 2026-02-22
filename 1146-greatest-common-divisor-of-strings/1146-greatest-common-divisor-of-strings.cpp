class Solution {
public:
    
    int gcd (int len1, int len2){
        if (len1 == 0){
            return len2;
        }
        return gcd(len2 % len1, len1);
    }

    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1){
            return "";
        }
        return str1.substr(0, gcd(str1.length(), str2.length()));
    }
};
