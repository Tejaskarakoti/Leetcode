class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n =word1.length();
        int m =word2.length();

        vector<int>rightmatch(n+1,0);

        int rightmatched =0;
        int i=n-1;
        int j=m-1;

        while(i>=0){
            if(j>=0 && word1[i]==word2[j]){
                rightmatched++;
                j--;
            }
            rightmatch[i]= rightmatched;
            i--;
        }
        vector<int>seq;
        bool changepow =true;
        
    i=0; j=0;

    while(i<n && j<m){
        if(word1[i]==word2[j]){
            seq.push_back(i);
            j++;

        }
        else if(changepow==true &&rightmatch[i+1]>=m-j-1){
            seq.push_back(i);
            j++;
        changepow =false;
        }
    i++;
    }
    if(j==m){
        return seq;
    }
    else return vector<int>();
    }
};