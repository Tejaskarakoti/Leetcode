class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> sub;
        unordered_map<int,int> mp;

        while (!nums.empty()) {
            mp.clear();
            sub.clear();

            for(int i = 0; i < nums.size(); i++){
                if (mp.find(nums[i]) == mp.end()){
                    mp[nums[i]] = i;
                    sub.push_back(i);
                }
            }
            vector<int>temp;
            for (int i :sub) {
                temp.push_back(nums[i]);
            }

            sort(temp.begin(), temp.end());
            ans.insert(ans.end(), temp.begin(), temp.end());

            for (int i = sub.size() - 1; i >= 0; i--) {
                nums.erase(nums.begin() + sub[i]);
            }
        }

        return ans;
    }
};