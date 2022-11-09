class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& ori, int m, int n) {\
        int k=0;
                                                                          vector <vector <int>> fin;
                                                                          if(ori.size()!= m*n){
                                                                              return fin;
                                                                          }
        for(int i =0;i<m;i++){
            vector <int >tem;
            for(int j=0;j<n;j++){
                tem.push_back(ori[k]);
                k++;
            }
            fin.push_back(tem);
        }
                                                                          
                                                                          
                                                                          return fin;
    }
};