class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> ans(nums.size());
        int n=nums.size();

        for(int i =2*nums.size() - 1; i >= 0; i--) {
           int idx=i%n;
            while(!st.empty() && nums[st.top()] <= nums[idx]) {
                st.pop();
            }

            if(!st.empty()) {
                ans[idx] = nums[st.top()];
            } else {
                ans[idx] = -1;
            }

            st.push(idx);
        }

        return ans;
    }
};