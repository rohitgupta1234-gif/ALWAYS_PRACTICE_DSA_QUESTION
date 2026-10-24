class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxlength = 0;

        vector<bool>count(256, 0);
        int i = 0;
        int j = 0;

       while(j<s.size()){
           while(count[s[j]]){
                count[s[i]]=0;
                i++;
           }
           count[s[j]]=1;
           maxlength=max(maxlength,j-i+1);
           j++;
       }
       
        return maxlength;
    }
};