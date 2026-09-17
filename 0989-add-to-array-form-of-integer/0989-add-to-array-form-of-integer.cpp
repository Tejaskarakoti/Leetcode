class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int right=num.size()-1;
        int currsum=0;
        vector<int>ans;
        int carry=0;
        while(right >= 0 || k > 0 || carry > 0){
            int currsum = carry;
            if (right >= 0){
                currsum += num[right];
                right--;}
            currsum += k % 10;
            k /= 10;
            ans.push_back(currsum % 10);
            carry = currsum / 10;
        
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};