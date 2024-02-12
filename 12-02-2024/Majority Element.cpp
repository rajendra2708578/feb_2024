


// this code contain only the functional code no header files or main function are not included.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int index=0,count=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[index]==nums[i])
            count++;
            else
            count--;
            if(count==0)
            {
                index=i;
                count=1;
            }
        }
        return nums[index];
    }
};