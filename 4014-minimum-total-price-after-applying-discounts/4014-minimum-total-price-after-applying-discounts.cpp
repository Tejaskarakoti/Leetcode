class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        reverse(prices.begin(),prices.end());

         sort(discounts.begin(),discounts.end());
        reverse(discounts.begin(),discounts.end());

        int d = discounts.size();
        double ans=0;

        for(int i=0; i<prices.size(); i++){
            if(i<d){
                ans+= prices[i] * (100 - discounts[i]) /100.0;
            }
            else ans+=prices[i];
        }
        return ans;
    }
};