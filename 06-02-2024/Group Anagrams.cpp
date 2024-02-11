


//this code contain the only functional code no header files or main are included.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        vector<vector<string>>vec;
        for(auto s:strs)
        {
            string ss=s;
            sort(ss.begin(),ss.end());
            mp[ss].push_back(s);
        }
        for(auto it:mp)
        {vector<string>check;
            for(auto x:it.second)
            {
                check.push_back(x);
            }
            vec.push_back(check);
        }
        return vec;
    }
};