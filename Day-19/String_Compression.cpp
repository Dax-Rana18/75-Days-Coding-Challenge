class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int counter = 0;

        while (i < n) {
            int j = i + 1;
            while (j < n && chars[j] == chars[i]) {
                j++;
            }
            // yaha pe tb aana hai
            // either when u have reached the end of vector
            // or u have encountered a new/diff character

            // ab old character ko store krna hai in same vector
            chars[counter++] = chars[i];
            int count = j - i; // i is initial index - j is final index =count

            if (count > 1) {
                // converting count into single digit and then saving in answer
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[counter++] = ch;
                }
            }
            // moving to different character
            i = j;
        }
        return counter;
    }
};