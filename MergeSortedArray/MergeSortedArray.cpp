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
                C[l++] = A[j++];
            else
                C[l++] = B[k++];
        }

        if (j < m)
        {
            while (j < m && l < m+n)
                C[l++] = A[j++];
        }

        if (k < n)
        {
            while (k < n && l < m+n)
                C[l++] = B[k++];
        }

        for (int i = 0; i < m+n; ++i)
            A[i] = C[i];
    }

    void merge2(int A[], int m, int B[], int n)
    {
        int i = m + n -1;
        int j = m - 1;
        int k = n - 1;

        while (i >= 0)
        {
            if (j >= 0 && k >= 0)
            {
                if (A[j] >= B[k])
                    A[i--] = A[j--];
                else
                    A[i--] = B[k--];
            }
            else if (k >= 0)
                A[i--] = B[k--];
            else
                i = -1;
        }
    }
};

int main()
{
    int A[10] = {1, 7, 15, 23};
    int B[] = {12, 18, 20};

    Solution s;
    s.merge2(A, 4, B, 3);

    for (int i = 0; i < 10; ++i)
        cout << A[i] << endl;

    return 0;
}