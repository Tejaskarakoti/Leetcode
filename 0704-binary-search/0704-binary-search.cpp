class Solution {
public:

int solve(vector<int>& arr, int tar,int left, int right){
    if(left<=right){
        int mid = left + (right-left)/2;

        if(arr[mid] ==tar){
            return mid;
        }
        else if(arr[mid]<tar){
            return solve(arr,tar,mid+1,right);
        }
        else return solve(arr,tar,left,mid-1);
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        return solve(nums,target,0,nums.size()-1);
        
    }
};