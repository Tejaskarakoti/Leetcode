class Solution {
public:
    int minRotations(string s) {
        int sum =min(s[0] -'0',10 -(s[0] -'0'));

        for(int i =0; i<s.size()-1; i++){
           int a = s[i] -'0';
            int b = s[i + 1]-'0';

            int diff = abs(b - a);
            sum += min(diff, 10 - diff);

        }
        return sum;
    }
};