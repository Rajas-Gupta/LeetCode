class Solution {
public:
    bool isPalindrome(int x) {
    long int n, rev=0, rem;
    n = x;
    if (x >= 0)
    {
        while (x != 0)
        {
            rem = x % 10;
            rev = (rev * 10) + rem;
            x = x / 10;
        }
        if (n == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
    };