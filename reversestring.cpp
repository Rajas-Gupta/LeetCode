void reversestring(vector <char> &s,int l,int i){
    int mid=l/2;
    if(i>=mid){
        return;
    }
    swap(s[i],s[l-1-i]);
    reversestring(s,l,i+1);
} 
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size();
        reversestring(s,l,0);
    }
};