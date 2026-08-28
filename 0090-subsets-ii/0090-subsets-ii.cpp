class Solution {
public:


void subset(vector<int>&nums,int i,vector<int>ans,vector<vector<int>>&result){
    if(i==nums.size()){
        result.push_back(ans);
return;
}
    ans.push_back(nums[i]);

    subset(nums, i+1, ans, result);
    ans.pop_back();

    int index=i+1;

    while(index<nums.size() && nums[index]==nums[index-1]){
        index++;
    }
    subset(nums, index, ans, result);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> ans;
        subset(nums, 0, ans, result);

        return result; 

        
    }
};