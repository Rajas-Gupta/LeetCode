class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int k=nums.size();
        for(int i=0;i<k;i++){
            int cnt=0;
            int j=nums[i];
            for(int l=0;l<k;l++){
                if(nums[l]<nums[i] && i!=l){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};