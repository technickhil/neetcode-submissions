class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        for(char ch:s) {
            if(isalnum(ch)){
                st += tolower(ch);
            }
        }
        return st == string(st.rbegin(), st.rend());
    }
};
