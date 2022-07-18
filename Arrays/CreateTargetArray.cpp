class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int k=nums.size();
        vector<int>target;
        for(int i=0;i<k;i++){
            target.insert(target.begin()+index[i] ,nums[i]);
        }
        return target;
    }
};