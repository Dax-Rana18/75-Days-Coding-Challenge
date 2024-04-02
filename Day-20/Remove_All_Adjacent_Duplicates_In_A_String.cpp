class Solution {
public: 
    string removeDuplicates(string s) {
        int i=0;
        while(i<s.length()-1){
            if(s[i]==s[i+1]){
            s.erase(i,2);
            // Check if the string is empty before resetting i
            if(s.empty()) {
                break;
            }
            i=0;
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};