class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum=0;
    long long total=0;
    long long n=nums.size();
    int j=0,i=0;
    while(j<n){
      sum+=nums[j];
      long long product=sum*(j-i+1);
      while(product>=k && i<=j){
         sum-=nums[i];
         i++;
         product=sum*(j-i+1);
      }
     
      total+=(j-i+1);
      j++;
    }
    return total;
    }
};