class Solution {
public:
    int minimumDeletions(vector<int>& nums){
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        
          int n = nums.size();
        int first =0;
        int second=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==mn){
                first=i;
            }
            if(nums[i]==mx){
                second=i;
            }
        }
        int ans=0;
       if(first <second){
            ans = min({
                second +1,
                n -first,
                first + 1+ n- second
            });
        }
        else{
            ans = min({
                first +1,
                n- second,
                second+ 1 +n-first
            });
        }

        return ans;
    }
};