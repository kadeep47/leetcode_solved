class Solution {
public:
    int closetTarget(vector<string>& words, string target, int start) {
        int n = words.size();
        auto it = find(words.begin(),words.end(),target);
        if(it == words.end()){
            return -1;
        }else{
            int cnt =  count(words.begin(),words.end(),target);
            int ans = INT_MAX;
            int ind = it - words.begin();
            while(cnt--){
                // cout << ind << " ";
                int bet = abs(ind -start);
                int out  = abs(n - bet);
                // cout << bet << " " << out << endl;
                ans = min(ans,bet);
                ans = min(ans,out);
                it = find(words.begin()+ind+1,words.end(),target);
                ind = it-words.begin();
            }
            return ans;
        }


    }
};