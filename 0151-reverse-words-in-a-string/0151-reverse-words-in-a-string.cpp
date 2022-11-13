class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string rev, w;
        
        ss >> rev;
        while (ss >> w) rev = w + " " + rev;
        
        return rev.substr(0, rev.length());
    }
};