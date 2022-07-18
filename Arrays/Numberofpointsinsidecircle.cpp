class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int> ans;
        for(auto x:queries){
            int x1=x[0];
            int y1=x[1];
            int r=x[2];
            int count=0;
            for(auto k:points){
                int a=abs(x1-k[0]);
                int b=abs(y1-k[1]);
                int h=a*a+b*b;
                if(r*r>=h){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
        
    }
};