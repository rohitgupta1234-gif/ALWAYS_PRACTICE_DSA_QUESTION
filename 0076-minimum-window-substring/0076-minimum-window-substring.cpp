class Solution {
public:
    string minWindow(string s, string t) {
        int ans=INT_MAX;
   
    unordered_map<char,int>mp;
    for(int i=0; i<t.size(); i++){
        mp[t[i]]++;
    }
    int index=-1;
    int j=0;
    int i=0;
    int total=t.size();
    while(j<s.size()){
       mp[s[j]]--;
        if(mp[s[j]]>=0){
            total--;
        }
        while(total==0 && i<=j){
            
            if(ans>(j-i+1)){
                index=i;
                ans=j-i+1;
            }
            mp[s[i]]++;
            if(mp[s[i]]>0){
                total++;
            }
            i++;
        }
        j++;

    }
    if(index==-1){
        return "";
    }
    string str;
    for(int i=index; i<index+ans; i++){
         str+=s[i];
    }
    return str;
    }
};