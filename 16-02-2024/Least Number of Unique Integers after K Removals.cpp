



//this is functional code no header files or main  are included in it.


class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        vector<pair<int,int>>pi;
        unordered_map<int,int>mp;
        for(auto it:arr)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            pi.push_back({it.second,it.first});
        }
        sort(pi.begin(),pi.end());
       
        int j=0;
       while(k>0 && j<pi.size())
       {
           if(k>0)
           {
               if(pi[j].first<=k)
               {
                   k-=pi[j].first;
                   pi[j].first=0;
                   j++;
               }
               else
               {
                   pi[j].first-=k;
                   k=0;
               }
           }
       }
        int count=0;
        for(int i=0;i<pi.size();i++)
        {
            // cout<<pi[i].first<<" "<<pi[i].second<<endl;
            if(pi[i].first>0)
            count++;
        }
        return count;
    }
};