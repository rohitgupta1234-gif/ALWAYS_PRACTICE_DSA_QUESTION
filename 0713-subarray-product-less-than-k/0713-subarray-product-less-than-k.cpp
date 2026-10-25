class Solution {
public:
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
if (k <= 1) return 0;


    long long sum = 0;
    int n = nums.size();
    int i = 0, j = 0;
    long long product = 1;

    while (j < n) {
        product *= nums[j];

        while (product >= k && i <= j) {
            product /= nums[i];
            i++;
        }

        sum += (j - i + 1);
        j++;
    }

    return sum;
}


};
