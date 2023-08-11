class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> x;
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                if (isalpha(s[i])) {
                    x.push_back(tolower(s[i])); // Convert to lowercase
                } 
                else {
                    x.push_back(s[i]);
                }
            }
        }
        
        int end = x.size() - 1;
        if (end < 1) {
            return true; // Empty string or single character is a palindrome
        }
        
        
        for (int i = 0; i < x.size(); i++) {
            if (x[i] != x[end]) {
                return false;
            }
            end--;
        }
        return true;
    }
};
