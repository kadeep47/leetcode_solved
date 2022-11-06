class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
     int n = pref.size();
        vector <int> v(n,0);
        v[0] =  pref[0];
        int comb = 0;
        for(int i=1;i<n;i++){
            v[i] = pref[i] ^ v[i-1] ^comb;
            comb = comb^v[i-1];
        }
        return v;   
    }
};