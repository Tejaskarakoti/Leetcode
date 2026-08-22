class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans =-1;
        int mindis =INT_MAX;

        for(int i=0; i<drones.size(); i++){
            int x1= drones[i][0];
            int y1 =drones[i][1];
            int range =drones[i][2];

            int dis = abs(x1-target[0])+ abs(y1-target[1]);
            if(dis<=range && mindis>dis){
                mindis=dis;
                ans =i;
            }
        }
        return ans;
    }
};