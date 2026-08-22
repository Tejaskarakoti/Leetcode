class Solution {
public:
    bool checkDivisibility(int n) {
        int nn =n;

        int sum =0;
        int product =1;

        while(n>0){
            int rem = n%10;
            sum+=rem;
            product*=rem;
            n =n/10;
        }
        
        if(nn%(sum+product)==0){return true;}
        else return false;
    }
};