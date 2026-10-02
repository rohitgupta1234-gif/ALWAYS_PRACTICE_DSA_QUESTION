#include<iostream>
#include<string>
using namespace std;
bool tocheckpalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
string findNoPalindrome(string s){
     int n=s.size();
     int maxi=0;
     for(int i=0; i<s.size(); i++){
        int start=i;
        int end=i;
        int count=0;
        while(i<=end && end<=n){
            
        }
     }
    
}
int main() {
    string s;
    getline(cin,s);

   string p=findNoPalindrome(s);
   for(int i=0; i<p.size(); i++){
      cout<<p[i];
   }

} 