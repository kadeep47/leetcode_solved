class Solution {
public:
    int minNumberOfHours(int iniene, int iniexp, vector<int>& ene, vector<int>& exp) {

        priority_queue<pair <int,int>> pq;
        int n = ene.size();

        int ans = 0;
        int cnt = 0;

        for(int i= 0;i<n;i++){

            if(iniene <= ene[i]){
                cnt +=  ene[i] - iniene + 1;
                iniene  +=  ene[i] - iniene + 1;
            }
            if( iniexp <= exp[i] ){
                cnt += exp[i] - iniexp + 1;
                iniexp += exp[i] - iniexp + 1;
            }

            iniexp += exp[i];
            iniene -= ene[i];
        }

        return cnt;
        
    }
};