#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subsequenceprint(vector<int>nums,int i, int n,vector<int>temp,vector<vector<int>>&ans){
   if(i>=n){
    ans.push_back(temp);
    return;
   }

   temp.push_back(nums[i]);
   subsequenceprint(nums,i+1,n,temp,ans);

   temp.pop_back();
   subsequenceprint(nums,i+1,n,temp,ans);
}
vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int i=0;
        int j=nums.size();
        subsequenceprint(nums,i,j,temp,ans);
   return ans;
}
int main() {
   int n;
   cin>>n;
   vector<int>nums(n);
   for(int i=0; i<n; i++){
      cin>>nums[i];
   }
   vector<vector<int>>ans=subsets(nums);

  for(int i=0; i<ans.size(); i++){
    cout<<'[';
    for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j];
        if(j!=ans[i].size()-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;
  }
    
  return 0;

}