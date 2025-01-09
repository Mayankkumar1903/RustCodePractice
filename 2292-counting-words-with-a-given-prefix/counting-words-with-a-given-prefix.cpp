class Solution {
public:
    bool prefix(string s,string t){
        if(s.size() < t.size()) return false;
        int i = 0,j=0;
        while(i<s.size() and j<t.size()){
            if(s[i]!=t[j]) return false;
            i++;
            j++;
        }
        return true;
    }
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for(auto it:words) if(prefix(it,pref)) cnt++;
        return cnt;
    }
};