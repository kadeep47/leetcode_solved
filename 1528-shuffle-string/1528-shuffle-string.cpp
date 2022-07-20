class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        int n = ind.size();
        string re;
        for(int i =0;i<n ;i++){
            auto it  = find(ind.begin(),ind.end(),i);
            re+= s[it-(ind.begin())];
        }
        return re;
    }
};