#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(char &ch:s){
        if(ch=='0'){
            ch='5';
        }
    }
    int n=stoi(s);
    cout<<s<<endl;;
}