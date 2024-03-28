//my approach here the vector part is not hapenning since i am tryoing to push_back elements 
// and also i tried 2nd approach using for loop and swapping the elements 
// class Solution {
// public:
//     string reverseWords(string s) {
//         // vector<string> ans;
//         reverse(s.begin(),s.end());
//         int left=0,right=0;
//         for(int i=0;i<s.length();i++){
        
//             if((s[i]=='\0') || (i=s.length()-1)){
//                 right=i;
//                 //last attmpt to swap the characters itself in a string 
//                 // int a=left ,b=right;//temp variables 
//                 // for(int j=left;j<right;j++){
//                 //     swap(s[a++],s[b--]);
//                 // }
//                 reverse(s.begin()+left,s.begin()+right);
//                 s[right+1]=' ';



//                 // for(int j=right-1;j>left;j--){
//                 //     if(s[j]=='\0'){
//                 //         continue;
//                 //     }
//                 //     else{
//                 //     ans.push_back(s[j]);
//                 //     }
//                 // }
//                 // char ch=' ';
//                 // ans.push_back(ch);

//                 //phele ka hai
//                 // reverse(s.begin()+left,s.begin()+right);


//                 left=right+1;
//             }
//         }
//         // return ans;
//         return s;
//     }
// };

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int left=0;
        int right=0;
        int i=0;
        while(i<n){
            while(i<n && s[i]==' ')i++; //it will go till the spaces are found and i is iterated to skip those spaces
            if(i==n)break; // preventing i going out of bounds 
            while(i<n && s[i]!=' '){ 
                // right will get appended along with i which will happen simaltaneously and thus the 
                s[right++]=s[i++];
            }
            reverse(s.begin()+left,s.begin()+right);
            s[right++]=' ';
            left=right;
            i++;
        }
        s.resize(right-1);
        return s;
    }
};
