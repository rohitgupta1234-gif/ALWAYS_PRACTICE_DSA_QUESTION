#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int i=0;
    int ans=0;
    int count=0;
    while(i<s.size()){
        for(int j=i-1; j>=0; j--){
           if(s[i]==s[j]){
               count=0;
               break;
           }
        }
        count++;
        if(count>ans){
            ans=count;
        }
        i++;
    }
    cout<<ans;
    
}