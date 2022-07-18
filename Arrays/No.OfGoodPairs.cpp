class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good=0;
        int j=1;
        int k=nums.size();
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                if(nums[i]==nums[j]){
                    good++;
                }
            }
        }
        return good;
    }
};