class Solution {
public:
    bool checkValidString(string s) {
        int l=0;
        int h=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                l++;
                h++;
            }
            else if(s[i]==')'){
                l--;
                h--;
            }
            else{
                l--;
                h++;
            }
            if(h<0){
                return false;
            }
            if(l<0){
                l=0;
            }
        }
        return l==0;
    }
};