class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        char last = s[0];
        ans += last;
        int cnt = 1;
        for(int i=1;i<s.size();i++){
            if(s[i]==last){
                cnt++;
                if(cnt<3){
                    ans+=last;
                }
            }
            else{
                last = s[i];
                cnt = 1;
                ans += last;
            }
        }
        return ans;
    }
};