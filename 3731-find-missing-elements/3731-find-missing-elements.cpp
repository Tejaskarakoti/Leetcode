class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> a;
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for(int i = nums[0]; i <= nums.back(); i++){
            a.push_back(i);
        }
        int j = 0;
        for(int i = 0; i < a.size(); i++){
            if(j < nums.size() && a[i] == nums[j]){
                j++;
            }
            else{
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};