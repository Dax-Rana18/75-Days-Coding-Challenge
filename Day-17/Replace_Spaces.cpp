#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string ans="";
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			ans.push_back('@');
			ans.push_back('4');
			ans.push_back('0');
		}
		else{
		ans.push_back(str[i]);
		}
	}
	return ans;
}


//or use replace function simple 
string replaceSpaces(string &str){
	// Write your code here.
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            str.replace(i,1,"@40");  
        }
    }
    return str;
}
