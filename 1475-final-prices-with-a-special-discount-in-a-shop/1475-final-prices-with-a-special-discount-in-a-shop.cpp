class Solution {
public:
    vector<int> finalPrices(vector<int>& pri) {
        int n =  pri.size();
        vector <int>v;
        for(int i=0;i<n;i++){
            int fin =pri[i];
            for(int j=i+1;j<n;j++){
                // cout << j  << " ";
                if(pri[j] <= pri[i]){
                    fin = pri[i] - pri[j];
                    break;
                }
            }
            // cout << endl;
            v.push_back(fin);
        }
        
        return v;
    }
};