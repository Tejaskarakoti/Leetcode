class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> mp;

        for(int i = 0; i <= n-k; i++) {
            map<int, bool> seen;

            for(int j = i; j < i+k; j++) {
                if(!seen[nums[j]]) {
                 mp[nums[j]]++;
                    seen[nums[j]] = true;
                }
            }
        }
        int ans =-1;
        for(auto it : mp) {
            if(it.second == 1) {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};