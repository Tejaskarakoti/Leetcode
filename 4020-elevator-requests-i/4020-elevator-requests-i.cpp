class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int total = 0;
        int curr = 0;
        
        for (int floor : requests) {
            total += abs(curr - floor);
            curr = floor;
        }
        return total;
    }
};