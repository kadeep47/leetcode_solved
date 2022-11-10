class Solution {
public:
//     bool tell(string s){
//         if(s.size()  > 1){
//         for(int i =0;i<s.size()-1;i++){
//             if(s[i] == s[i+1]){
//                 return false;
//             }
//         }
//         }
        
//         return true ;
//     }
    string removeDuplicates(string s) {
       string ans;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(ans.size() && ans.back() == s[i])
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        return ans;
    }
};