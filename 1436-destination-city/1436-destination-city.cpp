class Solution {
public:
    string destCity(vector<vector<string>>& path) {
        set <string >  in , out;
        for(int i =0 ;i<path.size();i++){
            out.insert(path[i][0]);
            in.insert(path[i][1]);
        }
        for(auto it : out ){
            auto pos = in.find(it);
            if(pos  !=  in.end()){
                in.erase(pos);
            }
        }
        auto it =in.begin();
        string re =*it  ;
        return re;
    }
};