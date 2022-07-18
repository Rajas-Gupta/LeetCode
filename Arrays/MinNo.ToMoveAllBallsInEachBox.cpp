class Solution {
public:
    vector<int> minOperations(string boxes) {
        int k=boxes.length();
        vector<int>min;
        for(int i=0;i<k;i++){
            int cnt1=0;
            int sum=0;
            for(int j=0;j<i;j++){
                if(boxes[j]=='1'){
                    cnt1=i-j;
                    sum+=cnt1;
                }
            }
            for(int j=i+1;j<k;j++){
                if(boxes[j]=='1'){
                    cnt1=j-i;
                    sum+=cnt1;
                }
            }
            min.push_back(sum);
        }
        return min;
    }
};