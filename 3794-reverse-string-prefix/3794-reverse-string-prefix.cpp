class Solution {
public:
    string reversePrefix(string s, int k){
        string part="";

        for(int i=0; i<k ;i++){
            part+=s[i];
        }
        reverse (part.begin(),part.end());

        for(int i=k ;i<s.size(); i++){
            part+=s[i];
        }
    return part;
        
    }
};