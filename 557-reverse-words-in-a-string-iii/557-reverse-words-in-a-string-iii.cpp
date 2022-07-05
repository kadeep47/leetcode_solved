class Solution {
public:
    string reverseWords(string s) {
        s+= ' ';
        s = ' '+s;
        // cout << ".."<< s  << ".." << endl;
        int n = s.size();
        vector <int> v;
        for(int i=0;i <n;i++){
            if(s[i] == ' '){
                v.push_back(i);
            }
        }
        reverse(s.begin(),s.begin()+(v[0]));
        int p = v.size();

        for(int i =0;i <p-1;i++){
            reverse(s.begin() + (v[i]),s.begin()+v[i+1]);
        }
        return s.substr(0,n-2);

        
        
    }
};