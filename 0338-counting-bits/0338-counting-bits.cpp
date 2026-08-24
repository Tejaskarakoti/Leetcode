class Solution {
public:
    int solve(int n) {
        int anss = 0;

        while(n > 0) {
            anss +=n % 2;
            n /=2;
             }
        return anss;
    }
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i = 0;i <=n; i++) {
            ans.push_back(solve(i));
     }
        return ans;
    }
};