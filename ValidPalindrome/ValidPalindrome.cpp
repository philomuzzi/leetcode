#include <cctype>
#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::string;

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty())
            return true;

        string str;
        for (size_t i = 0; i != s.size(); ++i)
        {
            if (isalnum(s[i]))
                str.push_back(s[i]);
        }

        for (size_t b = 0, e = str.size() - 1; b < e; ++b, --e)
        {
            if (tolower(str[b]) != tolower(str[e]))
                return false;
        }

        return true;
    }

    void Test(string s)
    {
        if (isPalindrome(s))
            cout << s << " is a valid palindrome" << endl;
        else
            cout << s << " is not a valid palindrome" << endl;
    }
};

int main()
{
    Solution s;
    s.Test("A man, a plan, a canal: Panama");
    s.Test("");
    s.Test("race a car");
    s.Test("2");
    s.Test("C");
    return 0;
}