class Solution {
public:
    int maxDistance(vector<int>& v) {
        int n = v.size();
        
        int s = 0;
        int e =  n-1;
        int dif;
        int diff;
        // cout << v[e] << " "<< v[s] << endl;
        for(int i = 0; i < n ;i++){
            if((v[i]- v[e]) != 0){
                diff =  abs(e-i);
                // cout << e  << " " << i << endl;
                break;
            }
        }
         for(int i = n-1; i >0 ;i--){
            if((v[i]- v[s]) != 0){
                dif =  abs(s-i);
                // cout << s  << " " << i << endl;
                break;
            }
        }
        // cout<< diff<<" " << dif << endl;
        int p = max(dif,diff);
        return p;
        
    }
};