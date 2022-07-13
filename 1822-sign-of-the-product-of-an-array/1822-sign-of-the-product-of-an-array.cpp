class Solution {
public:
    
    int sgn(double v) {
  if (v < 0) return -1;
  if (v > 0) return 1;
  return 0;
}
    int arraySign(vector<int>& v) {
        
        for(int i=0;i<v.size();i++){
            v[i] = sgn(v[i]);
        }
        int re = accumulate(v.begin(), v.end(),1, multiplies<int>());
        return sgn(re);
    }
};