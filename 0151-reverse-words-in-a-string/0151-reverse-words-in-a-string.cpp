class Solution {
public:
    string reverseWords(string s){
        vector<string>v;
        string word ="";

        for(int i =0; i< s.size(); i++){
            if(s[i] != ' ') {
                word += s[i];
            }
            else if(word != ""){
                v.push_back(word);
                word = "";
            }
        }
        if(word != ""){
            v.push_back(word);
        }

        reverse(v.begin(),v.end());

        string ans ="";

        for(int i = 0;i <v.size(); i++) {
            if(i > 0) ans +=" ";
            ans += v[i];
        }
        return ans;
    }
};