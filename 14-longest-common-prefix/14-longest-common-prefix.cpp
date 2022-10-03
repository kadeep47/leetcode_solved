class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());
        string one = str[0];
        string s;
        string last =  str[ (str.size()  -1 )];
        int cnt =0 ;
        for(int i =0 ;i< min(one.size() ,last.size());i++){
            if(one[i] ==  last[i] && cnt == i){
                s += one[i];
                cnt++;
            }
        }
        return s;
    }
};