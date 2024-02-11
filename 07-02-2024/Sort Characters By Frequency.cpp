

 // this code contain only the function code no header files or main are included in it.
bool static comp(pair<int,char>&p1,pair<int,char>&p2)
    {
        return p1.first>p2.first;
    }
    string frequencySort(string s) {
        unordered_map<int,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        vector<pair<int,char>>vec;
        for(auto it:mp)
        {
            vec.push_back({it.second,it.first});
        }
        sort(vec.begin(),vec.end(),comp);
        string ans="";
        for(int i=0;i<vec.size();i++)
        {
            for(int j=0;j<vec[i].first;j++)
            {
                ans+=vec[i].second;
            }
        }
        return ans;
    }