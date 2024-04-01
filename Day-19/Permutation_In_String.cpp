//using sliding window method 
class Solution {
private:
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i])
                return 0;
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        // character counter array
        int count1[26] = {0};
        // this is basically to coiunt characters in your 1st input substring
        for (int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }
        // traversing s2 string in window of size s1 length and then comparing
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};

        // running for 1st window
        while (i < windowSize && i < s2.length()) {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        // count 1 and count 2 are arrays storing your charactes info
        if (checkEqual(count1, count2)) {
            return 1;
        }

        // otherwise aage wale window process karo
        while (i < s2.length()) {
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i - windowSize]; // basically taking out old character so that window may proceed
            index = oldChar - 'a';
            count2[index]--;

            i++;

            if (checkEqual(count1, count2)) {
                return 1;
            }
        }
        return 0;
    }
};