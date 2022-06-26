class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int n =  v.size();
        int f ;
        sort(v.begin(),v.end());
        for(int i =0  ;i < v.size();i++){
            if(v[i] == v[i+1]){
                f =v[i];
                break;
            }
        }
        return f;
        
    }
};