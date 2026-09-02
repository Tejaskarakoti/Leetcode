class Solution {
public:
    string reverseOnlyLetters(string s) {

        string test ="";

        string ans="";

        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                test+=s[i];
            }
        }
        reverse(test.begin(),test.end());

        int j=0;

        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                ans+=test[j];
                j++;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};