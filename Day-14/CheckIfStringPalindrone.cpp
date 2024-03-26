
#include <string>
using namespace std;

class Solution {
private:
    char removeUpperCase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    // Remove extra characters
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        } else {
            return false;
        }
    }

public:
    bool checkPalindrome(string s) {
        int start = 0, end = s.length() - 1;
        while (start <= end) {
            if (s[start] != s[end]) {
                return false;
            } else {
                start++;
                end--;
            }
        }
        return true;
    }

    bool isPalindrome(string s) {
        string s1 = "";
        // Remove characters
        for (int i = 0; i < s.length(); i++) {
            if (valid(s[i])) {
                s1.push_back(s[i]); 
            }
        }
        // Convert to lowercase
        for (int i = 0; i < s1.length(); i++) {
            s1[i] = removeUpperCase(s1[i]);
        }
        // Check palindrome
        return checkPalindrome(s1);
    }
};
