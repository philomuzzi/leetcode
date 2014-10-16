#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int uret = 0;

        bool bBelow = false;
        if (x < 0) {
            bBelow = true;
            x = -x;
        }

        while (x)
        {
            uret = uret * 10 + x % 10;
            x = x / 10;
        }

        // 一种效果不大的方法
//        while (uret >  1 << 31)
//            uret -=  1 << 31;

//        int ret = static_cast<int>(uret);

        if (bBelow)
            uret = -uret;

        return uret;
    }

    void Test(int x, int result)
    {
        int y = reverse(x);
        cout << x  <<"\t" << result <<"\t" << y << endl;
        assert(result == y);
    }
};

int main()
{
    Solution s;
    s.Test(9, 9);
    s.Test(0, 0);
    s.Test(12345, 54321);
    s.Test(-12345,-54321);
    s.Test(10000, 1);
    s.Test(10010, 1001);
    // 不同大小的数字要用不同的方式来消除warn
    s.Test(1000000003, 3000000001ul);
    s.Test(1000000009, static_cast<int>(9000000001));
    // 1000000009 && -1000000009呢

    return 0;
}