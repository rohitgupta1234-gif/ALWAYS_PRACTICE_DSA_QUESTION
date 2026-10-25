class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int total=0;
   unordered_map<int,int>mp;
   int sum=0;
   int n=nums.size();
   mp[0]=1;
    for(int i=0; i<n; i++){
        sum+=nums[i];
        int remainder=sum%k;
        if(remainder<0){
            remainder+=k;
        }
        total+=mp[remainder];
        mp[remainder]++;
    }
   return total;
   
    
    }
};