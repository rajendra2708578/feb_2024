



// this is functional code no header files or main are not included

class Solution{
public:
    int minValue(string s, int k){
        // code here
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            // cout<<it.second<<" "<<it.first;
            pq.push({it.second,it.first});
        }
        while(k>0 && !pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            int val=it.first;
            char ch=it.second;
            if(val>=2)
            {
                pq.push({val-1,ch});
            }
            k-=1;
        }
        int sum=0;
        while(!pq.empty())
        {
            int val=pq.top().first;
            sum+=(val*val);
            pq.pop();
        }
        return sum;
    }
};