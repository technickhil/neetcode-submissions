class Solution {
public:
    bool alphaNum(char ch) {
        return (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <='z' || ch >= '0' && ch <= '9');
    }


    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        
        while(start < end) {
            while(start < end && !alphaNum(s[start])) {
                start++;
            }
            while(start < end && !alphaNum(s[end])) {
                end--;
            }
            if(tolower(s[end]) != tolower(s[start])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
