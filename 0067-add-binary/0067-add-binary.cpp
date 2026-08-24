class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j =b.size()-1;

        int sum =0;
        int carry =0;
        string ans ="";

        while(i>=0 || j>=0){
            int val1 =0;
            int val2 =0;

            if(i>=0){
                val1 =a[i]-'0';
            }
            if(j >= 0) {
                val2 = b[j] - '0'; 
            }
    sum =val1 +val2+ carry;
     ans = char(sum%2 +'0')+ans;
    carry = sum/2;
    i--;
    j--;
        }
         if(carry) {
            ans = '1'+ ans;
        }
        
        return ans;
    }
};