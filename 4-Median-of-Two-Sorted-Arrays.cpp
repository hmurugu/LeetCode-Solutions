class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float result = 0;

        for ( int i = 0; i < nums2.size(); i++)
        {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        int start = 0, end = nums1.size() - 1;

        if(nums1.size() % 2 != 0)
        {
            result = nums1[(nums1.size() - 1)/ 2];
        }
        else
        {
            result = float(nums1[(nums1.size() - 2)/2] + nums1[(nums1.size())/2])/2;
        }
        return result;
    }
};
