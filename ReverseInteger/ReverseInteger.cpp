#include <vector>
#include <cassert>

class Solution {
public:
    int reverse(int x) {
        if (!x)
            return x;

        if (x / 10 == x)
            return x;

        bool bBelow = false;
        if (x < 0) {
            bBelow = true;
            x = -x;
        }

        std::vector<int> ivec;
        int z = 0;
        while (x / 10 != x)
        {
            z = x % 10;
            ivec.push_back(z);
            x = x % 10;
        }

        ivec.push_back(x);

        unsigned int uret = 0;
        for (std::vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
        {
            uret *= 10;
            uret += *iter;
        }

        if (uret > 2^31)
            uret -= 2^31

        int ret = static_cast<int>(uret);

        if (bBelow)
            ret = -ret;

        return ret;
    }
};

void main()
{
    Solution s;
    assert(1 == s.reverse(10000));
    assert(9 == s.reverse(9));
    assert(0 == s.reverse(0));
    assert(-12345 == s.reverse(-54321));
    assert(3000000001 - 2 ^ 31 == s.reverse(1000000003));
}