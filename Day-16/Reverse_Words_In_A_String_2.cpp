//Input: Hare Krishna 
//Output: earH anhsirK

#include <iostream>
#include <algorithm> // Include this for the 'reverse' function
#include <bits/stdc++.h>
#include <string>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int left = 0, right = 0;
        int n = s.length();
        int i = 0;
        while(i < n) {
            while(i < n && s[i] == ' ') i++;
            if(i == n) break;
            
            while(i < n && s[i] != ' ') {
                s[right++] = s[i++];
            }
            reverse(s.begin() + left, s.begin() + right); // Reverse the current word
            s[right++] = ' '; // Add a space after the reversed word
            left = right; // Set left to the start of the word
            i++;
        }
        s.resize(right - 1); // Resize the string to remove the trailing space
        return s;
    }

    void inputAndReverse() {
        string inputString;
        cout << "Enter a string: ";
        getline(cin, inputString); // Use getline to read a line of text including spaces
        string reversedString = reverseWords(inputString);
        cout << "Reversed string: " << reversedString << endl;
    }
};

int main() {
    Solution solution;
    solution.inputAndReverse(); // Call the function to input and reverse the string
    return 0;
}
