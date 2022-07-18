class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int k=encoded.size();
        vector<int>ans;
        ans.push_back(first);
        for(int i=0;i<k;i++){
            int a=ans[i]^encoded[i];
            ans.push_back(a);
        }
        return ans;
    }
};