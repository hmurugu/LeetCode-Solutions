class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ccount = 1;
        int mcount = 0;
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return 1;
        for(int i = 0; i < nums.size(); i++)
        { 
            int index = nums[i];
            if(i != (nums.size() -1))
            {
                if(nums[i+1] == index + 1)
                {
                    ccount++;
                    if(ccount > mcount)
                    {
                        mcount = ccount;
                    }
                }
                else if(nums[i+1] == index)
                {
                    continue;
                }
                else
                {
                    ccount = 1;
                }
            }
        }
        if(ccount > mcount)
        {
            mcount = ccount;
        }
        return mcount;
    }
};
