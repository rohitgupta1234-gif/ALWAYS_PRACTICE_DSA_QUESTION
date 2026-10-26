class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
         int i=0;
   int j=0;
   int ans=0;
   int n=nums.size();
   unordered_map<int,int>mp;
   while(j<n){
     mp[nums[j]]++;
     if(mp[nums[j]]>k){
        while(mp[nums[j]]>k && i<=j){
            mp[nums[i]]--;
            i++;
        }
     }
    ans = max(ans,j-i+1);
     j++;
   }
   return ans;
    }
};