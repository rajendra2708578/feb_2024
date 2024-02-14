




//this is functional code no header files or main are not inlcuded.

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive,negative,ans;
        for(auto it:nums)
        {
            if(it>0)
            positive.push_back(it);
            else
            negative.push_back(it);
        }
        int j=0;
        for(int i=0;i<nums.size()/2;i++)
        {
            ans.push_back(positive[j]);
            ans.push_back(negative[j]);
            j++;
        }
        return ans;
    }
};