class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> ans;
        for(int i=0;i<num;i++){
            vector<int> temp(i+1,1);
            if(i<=1){
                ans.push_back(temp);
            }
            else{
            for(int j=1;j<=i-1;j++)
                temp[j]=ans[i-1][j-1]+ans[i-1][j];                
            
            ans.push_back(temp);
            }
        }
        return ans;
            
    }
};