class Solution {
public:
    bool isPathCrossing(string path) {
        // urorederd_set<pair<int,int>> mp ;  // hash funtion are undefined for this .. 

        unordered_set<string> s;
        int x = 0, y = 0;
        s.insert(to_string(x) + "?" + to_string(y));
        for (auto c : path) {
            if (c == 'N') ++y;
            else if (c == 'S') --y;
            else if (c == 'E') ++x;
            else --x;
            if (s.count(to_string(x) + "?" + to_string(y))) return true;
            s.insert(to_string(x) + "?" + to_string(y));
        }
        return false;
    }
};