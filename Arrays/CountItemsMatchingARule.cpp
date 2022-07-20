class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int k=items.size();
        int cnt=0;
        for(int i=0;i<k;i++){
           if((ruleKey=="type" && items[i][0]==ruleValue)||(ruleKey=="color" && items[i][1]==ruleValue)||(ruleKey=="name" && items[i][2]==ruleValue)){
                cnt++;
            }
        }
        return cnt;
    }
};