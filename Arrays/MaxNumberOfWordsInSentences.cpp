class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int k=sentences.size();
        string str;
        int maxstr=0;
        for(int i=0;i<k;i++){
            str=sentences[i];
            int cnt=0;
            int len=str.length();
            for(int j=0;j<len;j++){
                if(str[j]==' '){
                    cnt++;
                }
               maxstr=max(maxstr,cnt+1); 
            }
        }
        return maxstr;
    }
};