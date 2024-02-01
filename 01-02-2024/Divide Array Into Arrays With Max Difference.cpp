



// this code contain only the functional code no header files or main are included.


vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<int>vec=nums;
        sort(vec.begin(),vec.end());
        vector<vector<int>>ans,empty;
        for(int i=0;i<nums.size();i+=3)
        {
            if(abs(vec[i]-vec[i+2])<=k)
            {
                ans.push_back({vec[i],vec[i+1],vec[i+2]});
            }
            else
            return empty;
        }
        return ans;
    }