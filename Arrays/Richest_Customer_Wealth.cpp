class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int k=accounts.size();
        int maxs=0;
        for(int i=0;i<k;i++){
            int sum=0;
            int j=accounts[i].size();
            for(int a=0;a<j;a++){
                sum+=accounts[i][a];
            }
            maxs=max(sum,maxs);
        }
        return maxs;
    }
};