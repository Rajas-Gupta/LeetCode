class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int k=candies.size();
        vector<bool>possible(k);
        int maxc=INT_MIN;
        for(int i=0;i<k;i++){
            maxc=max(maxc,candies[i]);
        }
        for(int i=0;i<k;i++){
            if((candies[i]+extraCandies)>=maxc){
                possible[i]=true;
            }
        }
        return possible;
    }
};