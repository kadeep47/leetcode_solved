class Solution {
public:
    bool checkRecord(string s) {
        bool re= true ;
        int n = s.size();
        int cnt = count(s.begin(),s.end(),'A');

        if (cnt >= 2)return false ;

        for(int i=0 ;i<n-2;i++){
            if(s[i] =='L' && s[i+1]== 'L' &&s[i+2] == 'L') return false;
        }
        return true ;
    }
};