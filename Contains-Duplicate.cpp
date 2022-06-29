//Blind75
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int diff;
        unordered_map<int, int> uhm;
        for(int i; i < nums.size(); i++)
        {
            if(uhm.find(nums[i]) != uhm.end() && uhm.find(nums[i])->first != i)
            {
                return true;
            }
            uhm[nums[i]] = i;
        }
        return false;
    }
};
