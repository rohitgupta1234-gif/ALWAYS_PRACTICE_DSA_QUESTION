class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
          int sum=0;
      int i=0,j=0;
      int n=nums.size();
    
    int mini=INT_MAX;
    while(j<n){
        sum+=nums[j];
        while(sum>=target && i<=j){
            if((j-i+1)<=mini){
                mini=(j-i+1);
            }
            sum-=nums[i];
            i++;
        }
        j++;
    }
    if(mini==INT_MAX){
        return 0;
    }
    else {
        return mini;
    }
    }
};