class Solution {
public:
    int reverseBits(int n) {
        string s="";
        int count = 0;

        while(count < 32) {
       int rem = n % 2;
            s +=char(rem +'0');
            n = n/ 2;
            count++;
        }
        int ans = 0;

        for(char c : s) {
            ans = ans * 2 + (c - '0');
        }

        return ans;
    }
};