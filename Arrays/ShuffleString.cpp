class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int l=s.length();
        string st="";
        for(int i=0;i<l;i++){
           for(int j=0;j<l;j++){
               if(i==indices[j]){
                   st+=s[j];
               }
           }
        }
    return st;
    }
};