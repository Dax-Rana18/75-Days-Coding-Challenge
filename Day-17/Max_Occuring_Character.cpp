//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int alphabet[26]={0};
        int num;
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(ch>='a' && ch<='z'){
                num=ch-'a';
                alphabet[num]++;
            }
            else{
                num=ch-'A';
                alphabet[num]++;
            }
        }
        int ans=0;
        int maxcount=INT_MIN;
        for(int i=0;i<26;i++){
            if(maxcount<alphabet[i]){ //in case of same max value of characters the value wont be counted 
                ans=i; //stored the index of alphabet 
                maxcount=alphabet[i];
            }
        }
        char alpha='a'+ans; //now added that index to 'a' to get that character 
        return alpha;
        }
};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends