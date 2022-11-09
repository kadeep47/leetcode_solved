class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> re;
        int m =  mat.size();
        int n =  mat[0].size();
        
        if((n*m) != (r*c)){
            return mat;
        }
        
        vector <int> v;
        for(int i =0 ;i< m;i++){
            for(int j =0 ;j< n;j++){
                v.push_back(mat[i][j]);
            }
        }
        
        // for(auto it : v){
        //     cout << it << " ";
        // }cout << endl;
        vector <int > push;
        int i =0;
        int cnt =0;
        while(i < v.size()){
            push.push_back(v[i]);
            cnt++;
            // cout << cnt << endl;
            if(cnt %c ==0 ){
                re.push_back(push);
                push.clear();
            }
            i++;
        }
        return re;
        
    }
};