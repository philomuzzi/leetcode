#include <iostream>

using namespace std;

class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int C[m+n];
        int j = 0, k = 0, l = 0;
        while (j < m && k < n && l < m+n)
        {
            if (A[j] <= B[k])
            {
                C[l] = A[j];
                j++;
            }
            else
            {
                C[l] = B[k];
                k++;
            }

            l++;
        }

        if (j < m)
        {
            while (j < m && l < m+n)
            {
                C[l] = A[j];
                l++;
                j++;
            }
        }

        if (k < n)
        {
            while (k < n && l < m+n)
            {
                C[l] = B[k];
                l++;
                k++;
            }
        }

        for (int i = 0; i < m+n; ++i)
            A[i] = C[i];
    }
};

int main()
{
    int A[10] = {1};
    int B[] = {};

    Solution s;
    s.merge(A, 1, B, 0);

    for (int i = 0; i < 10; ++i)
        cout << A[i] << endl;

    return 0;
}