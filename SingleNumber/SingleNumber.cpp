#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n) {
        int result = A[0];
        for (int i = 1; i != n; ++i)
            result ^= A[i];

        return result;
    }
};


int main()
{
    Solution s;
    int A[] = {1,2,3,4,5,6,7,6,5,4,3,2,1};
    int ret = s.singleNumber(A, 13);
    cout << ret << endl;

    int B[] = {1};
    ret = s.singleNumber(B, 1);
    cout << ret << endl;
    return 0;
}