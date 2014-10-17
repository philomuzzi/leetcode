#include <cstdio>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        char str[25];
        sprintf(str, "%d", n);
        string s(str);

        if (n <= 0 || n == 1 )
            return s;

        vector<pair<int, int> > pv;
        while(n)
        {
            pv.clear();
            char cc = s[0] - '0';
            char lc = cc;
            pair<int, int> p = make_pair(cc, 1);
            for(size_t i = 1; i != s.size(); ++i)
            {
                lc = cc;
                cc = s[i] - '0';
                if (lc != cc)
                {
                    pv.push_back(p);
                    p = make_pair(cc, 1);
                }
                else
                    p.second += 1;
            }

            pv.push_back(p);

            s.clear();
            for (vector<pair<int, int> >::iterator it = pv.begin(); it != pv.end(); ++it)
            {
                s.append(1, (char)it->second + '0');
                s.append(1, (char)it->first + '0');
            }

            cout << s << endl;
            n--;
        }

        return s;
    }
};

int main()
{
    Solution s;
    string rets = s.countAndSay(2);
    cout << rets << endl;
    return 0;
}