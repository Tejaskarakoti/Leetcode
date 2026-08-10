class Solution {
public:
    bool isPalindrome(string s) {

        string one ="";

        for(int i =0; i<s.size(); i++){
            if((s[i] >='a'&& s[i]<= 'z') || (s[i] >= 'A'&& s[i] <= 'Z') || (s[i]>='0' && s[i]<='9')){
               one.push_back(tolower(s[i]));
            }
        }
        
        for(int i=0; i<one.size(); i++){
            if(one[i]!=one[one.size()-i-1]){
                return false;
 
            }
        }
        return true;
    }
};