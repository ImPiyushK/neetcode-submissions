class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;

        for(int i = 0 ; i < s.size() ; ++i)
            mp[s[i]]++;
        
        int odd = INT_MIN, even = INT_MAX;
        for(auto it : mp){
            if(it.second % 2 == 0 && it.second < even)
                even = it.second;
            if (it.second % 2 != 0 && it.second > odd)
                odd = it.second;
        }
        return odd - even;
    }
};