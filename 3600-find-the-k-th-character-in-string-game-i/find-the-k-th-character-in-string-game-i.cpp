class Solution {
public:
    char nextLetter(char c){
        if(c=='z') return 'a';
        return c+1;
    }
    char kthCharacter(int k) {
        string word = "a";
        while(word.size()<k){
            string temp = "";
            for(int i=0;i<word.size();i++){
                temp += nextLetter(word[i]);
            }
            word += temp;
        }
        return word[k-1];
    }
};