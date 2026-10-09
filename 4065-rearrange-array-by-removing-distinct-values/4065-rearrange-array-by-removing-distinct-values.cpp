class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>mp(101, 0);

        for(int x : nums)
            mp[x]++;
       vector<int> ans;

        bool flag = true;
        while(flag){
            flag = false;

            for(int i = 1; i <= 100; i++){
                if (mp[i] > 0){
                    ans.push_back(i);
                    mp[i]--;
                    flag = true;
                }
            }
        }
        return ans;
    }
};