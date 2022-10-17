class Solution {
public:
    bool checkIfPangram(string s) {
        // unordered_map<char,int>m;
        // for(int i =0;i<s.size();i++){
        //     m[s[i]]++;
        // }
        char c = 'a';
        int a[26];
        memset(a,0,sizeof(a));
        cout << (int)c;
        
        
        for(int i =0;i<s.size();i++){
            a[((int)s[i]) -97] = 1;
        }
        
        
        // for(auto it : m){
        //     if(it.second  > 1){
        //         cout << it.first ;
        //         return false;}
        // }
        
        for(int i =0;i<26;i++){
            if(a[i] == 0) return false;
        }
        
        return true;
    }
};