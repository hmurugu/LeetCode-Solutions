class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        int res;
        int i = x;
        double r = 0;
        int count = 0;
        while (x >= 0)
        {   
            r = (r * 10) + (x%10);
            x = int(x / 10);
            count++;
        }
        cout<<r;
        if(r == i)
            return true;
        else
            return false;
    }
};
