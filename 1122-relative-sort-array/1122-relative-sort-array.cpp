class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;
        vector<int> anss;

        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {
                if (arr2[i] == arr1[j]) {
                    ans.push_back(arr1[j]);
                }
            }
        }
        unordered_set<int> st(arr2.begin(), arr2.end());

        for (int x : arr1) {
            if (st.find(x) == st.end()) {
                anss.push_back(x);
            }
        }

        sort(anss.begin(), anss.end());

        for(int x: anss){
            ans.push_back(x);

        }

        return ans;
    }
};