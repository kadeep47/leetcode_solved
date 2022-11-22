class Solution {
public:
    bool isPerfectSquare(int n){
        if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
            return true;
        }   
        return false;
    }
    int numSquares(int num) {
        vector<int> choices;
        for(int i = 1; i <= num; i++){
            if(isPerfectSquare(i)){
                choices.push_back(i);
            }
        }
        int n = choices.size();
        int dp[n + 1][num + 1];
        
        for(int i = 1; i <= n; i++){
            dp[i][0] = 0;
        }
        for(int j = 0; j <= n; j++){
            dp[0][j] = INT_MAX - 1;
        }
        
        for(int j = 1; j <= num; j++){
            if(j % choices[0] == 0){
                dp[1][j] = j/choices[0];
            }
            else{
                dp[1][j] = INT_MAX - 1;
            }
        }
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= num; j++){
                if(choices[i-1] <= j){
                    dp[i][j] = min(1 + dp[i][j-choices[i-1]], dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[n][num] == INT_MAX - 1){
            return -1;
        }
        return dp[n][num];
    }
};