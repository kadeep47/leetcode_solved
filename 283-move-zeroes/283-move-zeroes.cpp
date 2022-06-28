class Solution {
public:
    void moveZeroes(vector<int>& v) {
        auto ct =  count(v.begin(),v.end(),0);
        auto pt = ct;
        while(ct--){
            auto it = find(v.begin(),v.end(),0);
            v.erase(it);
        }
        for(int i=0;i< pt;i++){
            v.push_back(0);
        }
    }
};