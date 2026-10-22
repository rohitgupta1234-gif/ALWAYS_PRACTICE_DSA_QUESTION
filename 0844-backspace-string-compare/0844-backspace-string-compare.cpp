class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a;
        string b;
        stack<char>st;
        stack<char>p;
        for(int i=0; i<s.size(); i++){
           if(isalpha(s[i])){
               st.push(s[i]);
           }
           else if(!st.empty()){
            st.pop();
           }
        }
        while(!st.empty()){
            a+=st.top();
            st.pop();
        }
        for(int i=0; i<t.size(); i++){
            if(isalpha(t[i])){
                p.push(t[i]);
            }
            else if(!p.empty()){
                p.pop();
            }
        }
        while(!p.empty()){
            b+=p.top();
            p.pop();
        }
        if(a.size()==0 && b.size()==0){
            return true;
        }
        else if(a==b){
            return true;
        }
        else {
            return false;
        }
    }
};