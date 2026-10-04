#include<iostream>
#include<string>
#include<vector>
using namespace std;
void parenthesis(vector<string>&s,int left,int right,int n,string temp){
    if(left+right==2*n){
       s.push_back(temp);
       return;
    }
    

    if(left<n){
        temp.push_back('(');
        parenthesis(s,left+1,right,n,temp);
        temp.pop_back();
    }
    if(left>right){
        temp.push_back(')');
        parenthesis(s,left,right+1,n,temp);
        temp.pop_back();
    }


    
}
vector<string>GenerateParenthesis(int n){
    vector<string>s;
    int left=0;
    int right=0;
    string temp;
    parenthesis(s,left,right,n,temp);

    return s;
}
int main() {
    int n;
    cin>>n;
    vector<string>p;
    p=GenerateParenthesis(n);
    for(int i=0; i<p.size(); i++){
        cout<<p[i];
        cout<<endl;
    }
    

}