




//this code is functional code no header files or main are not includecd in it.
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>mp,mp1;
        for(auto it:trust)
        {
            mp[it[0]]++;
            mp1[it[1]]++;
        }
        int ans=-1;
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)==mp.end())
            {
                if(mp1[i]==n-1)
                ans=i;
            }
        }
        return ans;
    }
};