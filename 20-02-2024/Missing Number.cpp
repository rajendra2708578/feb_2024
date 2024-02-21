


//this code is functional code no header files or main are not included in it.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int miss=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
                miss=i;
                break;
            }
        }
        return miss;
    }
};