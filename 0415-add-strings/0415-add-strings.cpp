class Solution {
public:
    string addStrings(string num1, string num2) {
        int i= num1.size()-1;
        int j=num2.size()-1;
        int sum =0;
        int carry=0;

        string ans="";

        while(i>=0 || j>=0){
            int val1 = 0;
            int val2 = 0;
        
            if(i >= 0) {
                val1 = num1[i] - '0';  
            }
            if(j >= 0) {
                val2 = num2[j] - '0'; 
            }

        sum =val1+ val2+ carry;
        carry = sum/10;
        sum =sum%10;

        ans = char(sum +'0')+ ans;
        i--;
        j--;
    }
    if(carry>0){
        ans  =char(carry+ '0')+ans;
    }
    return ans;}
};