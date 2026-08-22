class Solution {
public:

  void allsubsets(vector<int>&nums,int i,vector<int>ans, vector<vector<int>>&result){
        if(i==nums.size()){
            result.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);

        allsubsets(nums,i+1,ans,result);
            ans.pop_back();

        allsubsets(nums,i+1,ans,result);

    }
        
        vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> ans;
        allsubsets(nums, 0, ans, result);

        return result;    
            
        }
};