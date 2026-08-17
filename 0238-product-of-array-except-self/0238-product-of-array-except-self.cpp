class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount = 0;
        int n = nums.size();
        for(auto it: nums) if(it == 0) ++zeroCount;

        if(zeroCount == 1){
            int curr =1;
            for(auto it: nums){
                if(it == 0) continue;
                curr *= it;
            }
            for(auto &it: nums) {
                if(it == 0){
                    it = curr;
                } else it = 0;
            }
            return nums;
        }
        if(zeroCount > 1){
            vector<int> ans(n, 0);
            return ans;
        }

        int total = 1;
        for(auto it:  nums) total *= it;
        for(auto &it: nums){
            it = total / it;
        }
        return nums;
    }
};