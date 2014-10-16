#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        if (!x)
            return x;

        if (x % 10 == x)
            return x;

        bool bBelow = false;
        if (x < 0) {
            bBelow = true;
            x = -x;
        }

        std::vector<int> ivec;
        int z = 0;
        while (x % 10 != x)
        {
            z = x % 10;
            ivec.push_back(z);
            x = x / 10;
        }

        ivec.push_back(x);

        unsigned int uret = 0;
        for (std::vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
        {
            uret *= 10;
            uret += *iter;
        }

        while (uret > 2<<30)
            uret -= 2<<30;

        int ret = static_cast<int>(uret);

        if (bBelow)
            ret = -ret;

        return ret;
    }

    bool Test(int x, int result)
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
    s.Test(1000000003, 3000000001 - (2<<30));
    // 1000000009 && -1000000009呢

    return 0;
}