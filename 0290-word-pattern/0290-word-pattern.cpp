
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> ch;
        unordered_map<string, char> mp;

        stringstream ss(s);
        string word;
        int i = 0;

        while (ss >> word) {
            if (i >= pattern.size()) {
                return false;
            }

            char c = pattern[i];

            if (ch.count(c) && ch[c] != word) {
                return false;
            }

            if (mp.count(word) && mp[word] != c) {
                return false;
            }

            ch[c] = word;
            mp[word] = c;

            i++;
        }

        return i == pattern.size();
    }
};

