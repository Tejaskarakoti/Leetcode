class Solution { 
public: 
    int firstStableIndex(vector<int>& nums, int k) { 
        int mn=INT_MAX; 
        int mx=INT_MIN; 
        int index=INT_MAX; 

        for(int i=0; i<nums.size(); i++){ 
            mx=max(mx,nums[i]); 

            mn=INT_MAX;

            for(int j=i; j<nums.size(); j++){ 
                mn=min(mn,nums[j]); 
            }

            if(mx-mn<=k){ 
                index=min(index,i); 
              } 
           } 

     if(index!=INT_MAX)
           { return index;} 
        else
            return -1; 
     } 
};  