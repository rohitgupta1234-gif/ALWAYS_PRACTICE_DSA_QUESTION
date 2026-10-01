#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,3,5};
    int n=5;
    vector<int>ans(n+1,0);
    for(int i=0; i<3; i++){
       ans[arr[i]]++;
    }
    for(int i=1; i<n+1; i++){
        if(ans[i]==0){
          cout<<i;
        }
    }
}