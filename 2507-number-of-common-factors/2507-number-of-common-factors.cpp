class Solution {
public:
    int commonFactors(int a, int b) {
        int p = min(a,b);
        int q = max(a,b);
        vector<int>v;
        for(int i= 1;i<p+1;i++){
            if(p%i == 0) v.push_back(i);
        }
        int cnt = 0 ;
        for(auto it : v){
            if (q%it== 0)cnt++;
        }
        return cnt;
    }
};