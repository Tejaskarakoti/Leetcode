class Solution {
public:
    int maximumSwap(int num) {
        string nums = to_string(num);
        string s = nums;    
        sort(s.rbegin(), s.rend()); 

        int idx = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != nums[i]) {
                idx = i; 
                break;
            }      
        }
        if (idx != -1) {
            for (int i = s.size() - 1; i >= 0; i--) {
                if (nums[i] == s[idx]) {
                    swap(nums[idx], nums[i]);
                    break;
                }
            }
        }

        return stoi(nums);
    }
};