#include <iostream>

using std::cout;
using std::endl;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        if (x % 10 == x)
            return true;

        int l = 1;
        int t = x;

        while (t / 10)
        {
            l *= 10;
            t = t / 10;
        }

        // x / 10 在1000021的情况下不能工作
        while (x > 0)
        {
            if (x % 10 != x / l)
                return false;

            x %= l;
            x /= 10;
            l /= 100;
        }

        return true;
    }

    void Test(int x)
    {
        if (isPalindrome(x))
            cout << x << " is Palindrome Number" << endl;
        else
            cout << x << " is not Palindrome Number" << endl;
    }
};

int main()
{
    Solution s;
    s.Test(12345);
    s.Test(123321);
    s.Test(-121);
    s.Test(1);
    s.Test(1000021);
    return 0;
}